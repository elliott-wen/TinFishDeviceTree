/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* this implements a sensors hardware library for the Android emulator.
 * the following code should be built as a shared library that will be
 * placed into /system/lib/hw/sensors.goldfish.so
 *
 * it will be loaded by the code in hardware/libhardware/hardware.c
 * which is itself called from com_android_server_SensorService.cpp
 */


/* we connect with the emulator through the "sensors" qemud service
 */
#define  SENSORS_SERVICE_NAME "sensors"

#define LOG_TAG "TinfishSensors"

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <cutils/log.h>
#include <cutils/sockets.h>
#include <hardware/sensors.h>
#include <sys/un.h>


#if 0
#define  D(...)  ALOGD(__VA_ARGS__)
#else
#define  D(...)  ((void)0)
#endif

#define  E(...)  ALOGE(__VA_ARGS__)


#include <hardware/qemud.h>

/** SENSOR IDS AND NAMES
 **/

static const char SENSOR_PATH[] = "/data/misc/sensor-control"; //SpamDroid: Workaround as we cannot build socket in init.rc, in android 7, we can put it it init.rc
static int createLocalDgramSocket()
{
  
  struct sockaddr_un addr;
  int fd = -1;

  if ( (fd = socket(AF_UNIX, SOCK_DGRAM, 0)) == -1) 
  {
      E("create local udp socket error");
      return -1;
  }


  memset(&addr, 0, sizeof(addr));
  addr.sun_family = AF_UNIX;
  strncpy(addr.sun_path, SENSOR_PATH, sizeof(addr.sun_path)-1);
  unlink(SENSOR_PATH);

  if (bind(fd, (struct sockaddr*)&addr, sizeof(addr)) == -1) 
  {
      E("bind local udp socket error");
      close(fd);
      return -2;
  }

  return fd;

}


#define MAX_NUM_SENSORS 5

#define SUPPORTED_SENSORS  ((1<<MAX_NUM_SENSORS)-1)

#define  ID_BASE           SENSORS_HANDLE_BASE
#define  ID_ACCELERATION   (ID_BASE+0)
#define  ID_MAGNETIC_FIELD (ID_BASE+1)
#define  ID_ORIENTATION    (ID_BASE+2)
#define  ID_TEMPERATURE    (ID_BASE+3)
#define  ID_PROXIMITY      (ID_BASE+4)

#define  SENSORS_ACCELERATION    (1 << ID_ACCELERATION)
#define  SENSORS_MAGNETIC_FIELD  (1 << ID_MAGNETIC_FIELD)
#define  SENSORS_ORIENTATION     (1 << ID_ORIENTATION)
#define  SENSORS_TEMPERATURE     (1 << ID_TEMPERATURE)
#define  SENSORS_PROXIMITY       (1 << ID_PROXIMITY)

#define  ID_CHECK(x)  ((unsigned)((x) - ID_BASE) < MAX_NUM_SENSORS)

#define  SENSORS_LIST  \
    SENSOR_(ACCELERATION,"acceleration") \
    SENSOR_(MAGNETIC_FIELD,"magnetic-field") \
    SENSOR_(ORIENTATION,"orientation") \
    SENSOR_(TEMPERATURE,"temperature") \
    SENSOR_(PROXIMITY,"proximity") \

static const struct {
    const char*  name;
    int          id; } _sensorIds[MAX_NUM_SENSORS] =
{
#define SENSOR_(x,y)  { y, ID_##x },
    SENSORS_LIST
#undef  SENSOR_
};

static const char*
_sensorIdToName( int  id )
{
    int  nn;
    for (nn = 0; nn < MAX_NUM_SENSORS; nn++)
        if (id == _sensorIds[nn].id)
            return _sensorIds[nn].name;
    return "<UNKNOWN>";
}

static int
_sensorIdFromName( const char*  name )
{
    int  nn;

    if (name == NULL)
        return -1;

    for (nn = 0; nn < MAX_NUM_SENSORS; nn++)
        if (!strcmp(name, _sensorIds[nn].name))
            return _sensorIds[nn].id;

    return -1;
}

/* return the current time in nanoseconds */
static int64_t now_ns(void) {
    struct timespec  ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (int64_t)ts.tv_sec * 1000000000 + ts.tv_nsec;
}

/** SENSORS POLL DEVICE
 **
 ** This one is used to read sensor data from the hardware.
 ** We implement this by simply reading the data from the
 ** emulator through the QEMUD channel.
 **/

typedef struct SensorDevice {
    struct sensors_poll_device_1  device;
    sensors_event_t               sensors[MAX_NUM_SENSORS];
    uint32_t                      pendingSensors;
    int64_t                       timeStart;
    int64_t                       timeOffset;
    uint32_t                      active_sensors;
    int                           fd;
    pthread_mutex_t               lock;
} SensorDevice;

/* Grab the file descriptor to the emulator's sensors service pipe.
 * This function returns a file descriptor on success, or -errno on
 * failure, and assumes the SensorDevice instance's lock is held.
 *
 * This is needed because set_delay(), poll() and activate() can be called
 * from different threads, and poll() is blocking.
 *
 * Note that the emulator's sensors service creates a new client for each
 * connection through qemud_channel_open(), where each client has its own
 * delay and set of activated sensors. This precludes calling
 * qemud_channel_open() on each request, because a typical emulated system
 * will do something like:
 *
 * 1) On a first thread, de-activate() all sensors first, then call poll(),
 *    which results in the thread blocking.
 *
 * 2) On a second thread, slightly later, call set_delay() then activate()
 *    to enable the acceleration sensor.
 *
 * The system expects this to unblock the first thread which will receive
 * new sensor events after the activate() call in 2).
 *
 * This cannot work if both threads don't use the same connection.
 *
 * TODO(digit): This protocol is brittle, implement another control channel
 *              for set_delay()/activate()/batch() when supporting HAL 1.3
 */
// static int sensor_device_get_fd_locked(SensorDevice* dev) {
//      Create connection to service on first call 
//     if (dev->fd < 0) {
//         dev->fd = qemud_channel_open(SENSORS_SERVICE_NAME);
//         if (dev->fd < 0) {
//             int ret = -errno;
//             E("%s: Could not open connection to service: %s", __FUNCTION__,
//                 strerror(-ret));
//             return ret;
//         }
//     }
//     return dev->fd;
// }



// /* Pick up one pending sensor event. On success, this returns the sensor
//  * id, and sets |*event| accordingly. On failure, i.e. if there are no
//  * pending events, return -EINVAL.
//  *
//  * Note: The device's lock must be acquired.
//  */
// static int sensor_device_pick_pending_event_locked(SensorDevice* d,
//                                                    sensors_event_t*  event)
// {
//     uint32_t mask = SUPPORTED_SENSORS & d->pendingSensors;
//     if (mask) {
//         uint32_t i = 31 - __builtin_clz(mask);
//         d->pendingSensors &= ~(1U << i);
//         *event = d->sensors[i];
//         event->sensor = i;
//         event->version = sizeof(*event);

//         D("%s: %d [%f, %f, %f]", __FUNCTION__,
//                 i,
//                 event->data[0],
//                 event->data[1],
//                 event->data[2]);
//         return i;
//     }
//     E("No sensor to return!!! pendingSensors=0x%08x", d->pendingSensors);
//     // we may end-up in a busy loop, slow things down, just in case.
//     usleep(100000);
//     return -EINVAL;
// }

// /* Block until new sensor events are reported by the emulator, or if a
//  * 'wake' command is received through the service. On succes, return 0
//  * and updates the |pendingEvents| and |sensors| fields of |dev|.
//  * On failure, return -errno.
//  *
//  * Note: The device lock must be acquired when calling this function, and
//  *       will still be held on return. However, the function releases the
//  *       lock temporarily during the blocking wait.
//  */
// static int sensor_device_poll_event_locked(SensorDevice* dev)
// {
//     D("%s: dev=%p", __FUNCTION__, dev);

//     int fd = sensor_device_get_fd_locked(dev);
//     if (fd < 0) {
//         E("%s: Could not get pipe channel: %s", __FUNCTION__, strerror(-fd));
//         return fd;
//     }

//     // Accumulate pending events into |events| and |new_sensors| mask
//     // until a 'sync' or 'wake' command is received. This also simplifies the
//     // code a bit.
//     uint32_t new_sensors = 0U;
//     sensors_event_t* events = dev->sensors;

//     int64_t event_time = -1;
//     int ret = 0;

//     for (;;) {
//         /* Release the lock since we're going to block on recv() */
//         pthread_mutex_unlock(&dev->lock);

//         /* read the next event */
//         char buff[256];
//         int len = qemud_channel_recv(fd, buff, sizeof(buff) - 1U);
//         /* re-acquire the lock to modify the device state. */
//         pthread_mutex_lock(&dev->lock);

//         if (len < 0) {
//             ret = -errno;
//             E("%s(fd=%d): Could not receive event data len=%d, errno=%d: %s",
//               __FUNCTION__, fd, len, errno, strerror(errno));
//             break;
//         }
//         buff[len] = 0;
//         D("%s(fd=%d): received [%s]", __FUNCTION__, fd, buff);


//         /* "wake" is sent from the emulator to exit this loop. */
//         /* TODO(digit): Is it still needed? */
//         if (!strcmp((const char*)buff, "wake")) {
//             ret = 0x7FFFFFFF;
//             break;
//         }

//         float params[3];

//         /* "acceleration:<x>:<y>:<z>" corresponds to an acceleration event */
//         if (sscanf(buff, "acceleration:%g:%g:%g", params+0, params+1, params+2)
//                 == 3) {
//             new_sensors |= SENSORS_ACCELERATION;
//             events[ID_ACCELERATION].acceleration.x = params[0];
//             events[ID_ACCELERATION].acceleration.y = params[1];
//             events[ID_ACCELERATION].acceleration.z = params[2];
//             events[ID_ACCELERATION].type = SENSOR_TYPE_ACCELEROMETER;
//             continue;
//         }

//         /* "orientation:<azimuth>:<pitch>:<roll>" is sent when orientation
//          * changes */
//         if (sscanf(buff, "orientation:%g:%g:%g", params+0, params+1, params+2)
//                 == 3) {
//             new_sensors |= SENSORS_ORIENTATION;
//             events[ID_ORIENTATION].orientation.azimuth = params[0];
//             events[ID_ORIENTATION].orientation.pitch   = params[1];
//             events[ID_ORIENTATION].orientation.roll    = params[2];
//             events[ID_ORIENTATION].orientation.status  =
//                     SENSOR_STATUS_ACCURACY_HIGH;
//             events[ID_ACCELERATION].type = SENSOR_TYPE_ORIENTATION;
//             continue;
//         }

//         /* "magnetic:<x>:<y>:<z>" is sent for the params of the magnetic
//          * field */
//         if (sscanf(buff, "magnetic:%g:%g:%g", params+0, params+1, params+2)
//                 == 3) {
//             new_sensors |= SENSORS_MAGNETIC_FIELD;
//             events[ID_MAGNETIC_FIELD].magnetic.x = params[0];
//             events[ID_MAGNETIC_FIELD].magnetic.y = params[1];
//             events[ID_MAGNETIC_FIELD].magnetic.z = params[2];
//             events[ID_MAGNETIC_FIELD].magnetic.status =
//                     SENSOR_STATUS_ACCURACY_HIGH;
//             events[ID_ACCELERATION].type = SENSOR_TYPE_MAGNETIC_FIELD;
//             continue;
//         }

//         /* "temperature:<celsius>" */
//         if (sscanf(buff, "temperature:%g", params+0) == 1) {
//             new_sensors |= SENSORS_TEMPERATURE;
//             events[ID_TEMPERATURE].temperature = params[0];
//             events[ID_ACCELERATION].type = SENSOR_TYPE_TEMPERATURE;
//             continue;
//         }

//         /* "proximity:<value>" */
//         if (sscanf(buff, "proximity:%g", params+0) == 1) {
//             new_sensors |= SENSORS_PROXIMITY;
//             events[ID_PROXIMITY].distance = params[0];
//             events[ID_ACCELERATION].type = SENSOR_TYPE_PROXIMITY;
//             continue;
//         }

//         /* "sync:<time>" is sent after a series of sensor events.
//          * where 'time' is expressed in micro-seconds and corresponds
//          * to the VM time when the real poll occured.
//          */
//         if (sscanf(buff, "sync:%lld", &event_time) == 1) {
//             if (new_sensors) {
//                 goto out;
//             }
//             D("huh ? sync without any sensor data ?");
//             continue;
//         }
//         D("huh ? unsupported command");
//     }
// out:
//     if (new_sensors) {
//         /* update the time of each new sensor event. */
//         dev->pendingSensors |= new_sensors;
//         int64_t t = (event_time < 0) ? 0 : event_time * 1000LL;

//         /* use the time at the first sync: as the base for later
//          * time values */
//         if (dev->timeStart == 0) {
//             dev->timeStart  = now_ns();
//             dev->timeOffset = dev->timeStart - t;
//         }
//         t += dev->timeOffset;

//         while (new_sensors) {
//             uint32_t i = 31 - __builtin_clz(new_sensors);
//             new_sensors &= ~(1U << i);
//             dev->sensors[i].timestamp = t;
//         }
//     }
//     return ret;
// }

/** SENSORS POLL DEVICE FUNCTIONS **/

static int sensor_device_close(struct hw_device_t* dev0)
{
    SensorDevice* dev = (void*)dev0;
    // Assume that there are no other threads blocked on poll()
    if (dev->fd >= 0) {
        close(dev->fd);
        dev->fd = -1;
    }
    pthread_mutex_destroy(&dev->lock);
    free(dev);
    return 0;
}

/* Return an array of sensor data. This function blocks until there is sensor
 * related events to report. On success, it will write the events into the
 * |data| array, which contains |count| items. The function returns the number
 * of events written into the array, which shall never be greater than |count|.
 * On error, return -errno code.
 *
 * Note that according to the sensor HAL [1], it shall never return 0!
 *
 * [1] http://source.android.com/devices/sensors/hal-interface.html
 */
static int sensor_device_poll(struct sensors_poll_device_t *dev0,
                              sensors_event_t* data, int count)
{
    SensorDevice* dev = (void*)dev0;
    D("%s: dev=%p data=%p count=%d ", __FUNCTION__, dev, data, count);

    if (count <= 0) {
        return -EINVAL;
    }
    //pthread_mutex_lock(&dev->lock);
    
    char buff[2048];
    int rc = read(dev->fd, buff, 2048);
    float params[3];
    if (sscanf(buff, "acceleration:%g:%g:%g", params+0, params+1, params+2)
                == 3) {
            
            data->acceleration.x = params[0];
            data->acceleration.y = params[1];
            data->acceleration.z = params[2];
            data->type = SENSOR_TYPE_ACCELEROMETER;
          
    }

        /* "orientation:<azimuth>:<pitch>:<roll>" is sent when orientation
         * changes */
    else if (sscanf(buff, "orientation:%g:%g:%g", params+0, params+1, params+2)
                == 3) {
            
            data->orientation.azimuth = params[0];
            data->orientation.pitch   = params[1];
            data->orientation.roll    = params[2];
            data->orientation.status  =
                    SENSOR_STATUS_ACCURACY_HIGH;
            data->type = SENSOR_TYPE_ORIENTATION;
            
    }

        /* "magnetic:<x>:<y>:<z>" is sent for the params of the magnetic
         * field */
    else if (sscanf(buff, "magnetic:%g:%g:%g", params+0, params+1, params+2)
                == 3) {
            
            data->magnetic.x = params[0];
            data->magnetic.y = params[1];
            data->magnetic.z = params[2];
            data->magnetic.status =
                    SENSOR_STATUS_ACCURACY_HIGH;
            data->type = SENSOR_TYPE_MAGNETIC_FIELD;
            
    }

        /* "temperature:<celsius>" */
    else  if (sscanf(buff, "temperature:%g", params+0) == 1) {
            
            data->temperature = params[0];
            data->type = SENSOR_TYPE_TEMPERATURE;
            
        }

        /* "proximity:<value>" */
    else if (sscanf(buff, "proximity:%g", params+0) == 1) {
            
           data->distance = params[0];
            data->type = SENSOR_TYPE_PROXIMITY;
            
        }


    //pthread_mutex_unlock(&dev->lock);
    return 1; //Always return one element one time!
}

static int sensor_device_activate(struct sensors_poll_device_t *dev0,
                                  int handle,
                                  int enabled)
{
    
    return 0;
}

static int sensor_device_set_delay(struct sensors_poll_device_t *dev0,
                                   int handle __unused,
                                   int64_t ns)
{
    return 0;
}

/** MODULE REGISTRATION SUPPORT
 **
 ** This is required so that hardware/libhardware/hardware.c
 ** will dlopen() this library appropriately.
 **/

/*
 * the following is the list of all supported sensors.
 * this table is used to build sSensorList declared below
 * according to which hardware sensors are reported as
 * available from the emulator (see get_sensors_list below)
 *
 * note: numerical values for maxRange/resolution/power were
 *       taken from the reference AK8976A implementation
 */
static const struct sensor_t sSensorListInit[] = {
        { .name       = "Tinfish 3-axis Accelerometer",
          .vendor     = "The Android Open Source Project",
          .version    = 1,
          .handle     = ID_ACCELERATION,
          .type       = SENSOR_TYPE_ACCELEROMETER,
          .maxRange   = 2.8f,
          .resolution = 1.0f/4032.0f,
          .power      = 3.0f,
          .reserved   = {}
        },

        { .name       = "Tinfish 3-axis Magnetic field sensor",
          .vendor     = "The Android Open Source Project",
          .version    = 1,
          .handle     = ID_MAGNETIC_FIELD,
          .type       = SENSOR_TYPE_MAGNETIC_FIELD,
          .maxRange   = 2000.0f,
          .resolution = 1.0f,
          .power      = 6.7f,
          .reserved   = {}
        },

        { .name       = "Tinfish Orientation sensor",
          .vendor     = "The Android Open Source Project",
          .version    = 1,
          .handle     = ID_ORIENTATION,
          .type       = SENSOR_TYPE_ORIENTATION,
          .maxRange   = 360.0f,
          .resolution = 1.0f,
          .power      = 9.7f,
          .reserved   = {}
        },

        { .name       = "Tinfish Temperature sensor",
          .vendor     = "The Android Open Source Project",
          .version    = 1,
          .handle     = ID_TEMPERATURE,
          .type       = SENSOR_TYPE_TEMPERATURE,
          .maxRange   = 80.0f,
          .resolution = 1.0f,
          .power      = 0.0f,
          .reserved   = {}
        },

        { .name       = "Tinfish Proximity sensor",
          .vendor     = "The Android Open Source Project",
          .version    = 1,
          .handle     = ID_PROXIMITY,
          .type       = SENSOR_TYPE_PROXIMITY,
          .maxRange   = 1.0f,
          .resolution = 1.0f,
          .power      = 20.0f,
          .reserved   = {}
        },
};



static int sensors__get_sensors_list(struct sensors_module_t* module __unused,
        struct sensor_t const** list)
{
    
    *list = sSensorListInit;

    return MAX_NUM_SENSORS;
}


static int
open_sensors(const struct hw_module_t* module,
             const char*               name,
             struct hw_device_t*      *device)
{
    int  status = -EINVAL;

    D("%s: name=%s", __FUNCTION__, name);

    if (!strcmp(name, SENSORS_HARDWARE_POLL)) {
        int dfd = createLocalDgramSocket();
        if(dfd < 0)
        {
            E("Unable to open sensor!");
            return status;
        }
        SensorDevice *dev = malloc(sizeof(*dev));

        memset(dev, 0, sizeof(*dev));

        dev->device.common.tag     = HARDWARE_DEVICE_TAG;
        dev->device.common.version = SENSORS_DEVICE_API_VERSION_1_0;
        dev->device.common.module  = (struct hw_module_t*) module;
        dev->device.common.close   = sensor_device_close;
        dev->device.poll           = sensor_device_poll;
        dev->device.activate       = sensor_device_activate;
        dev->device.setDelay       = sensor_device_set_delay;

        dev->fd = dfd;

        pthread_mutex_init(&dev->lock, NULL);

        *device = &dev->device.common;
        status  = 0;
    }
    return status;
}


static struct hw_module_methods_t sensors_module_methods = {
    .open = open_sensors
};

struct sensors_module_t HAL_MODULE_INFO_SYM = {
    .common = {
        .tag = HARDWARE_MODULE_TAG,
        .version_major = 1,
        .version_minor = 0,
        .id = SENSORS_HARDWARE_MODULE_ID,
        .name = "Tinfish SENSORS Module",
        .author = "SpamDroid Open Source Project",
        .methods = &sensors_module_methods,
    },
    .get_sensors_list = sensors__get_sensors_list
};