
#include <telephony/ril_cdma_sms.h>
#include <telephony/librilutils.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <pthread.h>
#include <alloca.h>
#include "atchannel.h"
#include "at_tok.h"
#include "misc.h"
#include <getopt.h>
#include <sys/socket.h>
#include <cutils/sockets.h>
#include <termios.h>
#include <sys/system_properties.h>
#include <netinet/in.h>
#include <fcntl.h>  
#include <sys/select.h>  
#include <sys/ioctl.h>  
#include <sys/un.h>
#include "ril.h"
#include "hardware/qemu_pipe.h"
#define LOG_TAG "RIL"
#include <utils/Log.h>



#define RILD_CONTROL "rild-control"
static const struct timeval TIMEVAL_0 = {3,0};
typedef enum {
    SIM_ABSENT = 0,
    SIM_NOT_READY = 1,
    SIM_READY = 2, /* SIM_READY means the radio state is RADIO_STATE_SIM_READY */
    SIM_PIN = 3,
    SIM_PUK = 4,
    SIM_NETWORK_PERSONALIZATION = 5,
    RUIM_ABSENT = 6,
    RUIM_NOT_READY = 7,
    RUIM_READY = 8,
    RUIM_PIN = 9,
    RUIM_PUK = 10,
    RUIM_NETWORK_PERSONALIZATION = 11
} SIM_Status;
static void onRequest (int request, void *data, size_t datalen, RIL_Token t);
static RIL_RadioState currentState();
static int onSupports (int requestCode);
static void onCancel (RIL_Token t);
static const char *getVersion();
static SIM_Status getSIMStatus();
static int getCardStatus(RIL_CardStatus_v6 **pp_card_status);
extern const char * requestToString(int request);
/*** Static Variables ***/
static const RIL_RadioFunctions s_callbacks = {
    RIL_VERSION,
    onRequest,
    currentState,
    onSupports,
    onCancel,
    getVersion
};
#ifdef RIL_SHLIB
static const struct RIL_Env *s_rilenv;
#define RIL_onRequestComplete(t, e, response, responselen) s_rilenv->OnRequestComplete(t,e, response, responselen)
#define RIL_onUnsolicitedResponse(a,b,c) s_rilenv->OnUnsolicitedResponse(a,b,c)
#define RIL_requestTimedCallback(a,b,c) s_rilenv->RequestTimedCallback(a,b,c)
#endif
static RIL_RadioState sState = RADIO_STATE_UNAVAILABLE;
static pthread_mutex_t s_state_mutex = PTHREAD_MUTEX_INITIALIZER;
static pthread_cond_t s_state_cond = PTHREAD_COND_INITIALIZER;
static int s_port = -1;
static const char * s_device_path = NULL;
static int          s_device_socket = 0;
/* trigger change to this with s_state_cond */


static void  requestSIM_IO(void *data, size_t datalen __unused, RIL_Token t)
{
    RIL_SIM_IO_Response sr;
    char *cmd = NULL;
    RIL_SIM_IO_v6 *p_args;
    
    memset(&sr, 0, sizeof(sr));
    p_args = (RIL_SIM_IO_v6 *)data;
    asprintf(&cmd, "%d,%d,%d,%d,%d",
                    p_args->command, p_args->fileid,
                    p_args->p1, p_args->p2, p_args->p3);
    sr.sw1 = 255;
    RLOGD("Trying to match %s command", cmd);
    if(strcmp(cmd, "192,12258,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "0000000a2fe204000fa0aa01020000";
    }

    else if(strcmp(cmd, "192,28480,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000806f40040011a0aa01020120";
    }
    else if(strcmp(cmd, "192,28617,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000086fc9040011a0aa01020104";
    }
    else if(strcmp(cmd, "192,28589,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000046fad04000aa0aa01020000";
    }
    else if(strcmp(cmd, "192,28618,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "0000000a6fca040011a0aa01020105";
    }
    else if(strcmp(cmd, "192,28433,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000016f11040011a0aa01020000";
    }
    else if(strcmp(cmd, "192,28435,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000016f13040011a0aa01020000";
    }
    else if(strcmp(cmd, "192,28486,0,0,15") == 0)
    {
        sr.sw1 = 148;
        sr.sw2 = 4;
        sr.simResponse = NULL;
    }
    else if(strcmp(cmd, "192,28621,0,0,15") == 0)
    {
        sr.sw1 = 148;
        sr.sw2 = 4;
        sr.simResponse = NULL;
    }
    else if(strcmp(cmd, "192,28613,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000f06fc504000aa0aa01020118";
    }
    else if(strcmp(cmd, "192,28472,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "0000000f6f3804001aa0aa01020000";
    }
    else if(strcmp(cmd, "192,28438,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000026f1604001aa0aa01020000";
    }
    else if(strcmp(cmd, "176,12258,0,0,10") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "98101430121181157002";
    }
    else if(strcmp(cmd, "178,28480,1,4,32") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "ffffffffffffffffffffffffffffffffffff07815155255155f4ffffffffffff";
    }
    else if(strcmp(cmd, "178,28617,1,4,4") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "01000000";
    }
    else if(strcmp(cmd, "176,28589,0,0,4") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "00000003";
    }
    else if(strcmp(cmd, "178,28618,1,4,5") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "0000000000";
    }
    else if(strcmp(cmd, "176,28433,0,0,1") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "55";
    }
    else if(strcmp(cmd, "178,28613,1,4,24") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "43058441aa890affffffffffffffffffffffffffffffffff";
    }
    else if(strcmp(cmd, "176,28472,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "ff30ffff3c003c03000c0000f03f00";
    }
    else if(strcmp(cmd, "176,28438,0,0,2") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "0233";
    }
    else if(strcmp(cmd, "192,28436,0,0,15") == 0)
    {
        sr.sw1 = 144;
        sr.sw2 = 0;
        sr.simResponse = "000000146f1404001aa0aa01020000";
    }
    if(sr.sw1 != 255)
        RIL_onRequestComplete(t, RIL_E_SUCCESS, &sr, sizeof(sr));
    else
    {
        RLOGD("Failed to match %s command", cmd);
        RIL_onRequestComplete(t, RIL_E_GENERIC_FAILURE, NULL, 0);
    }
    free(cmd);
    return;

}


static void
setRadioState(RIL_RadioState newState)
{
    RLOGD("setRadioState(%d)", newState);
    if (sState != newState)
    {
        sState = newState;
        RIL_onUnsolicitedResponse (RIL_UNSOL_RESPONSE_RADIO_STATE_CHANGED,
                                    NULL, 0);
        RIL_onUnsolicitedResponse (RIL_UNSOL_RESPONSE_SIM_STATUS_CHANGED,
                                    NULL, 0);
    }
}

static void requestRadioPower(void *data, size_t datalen __unused, RIL_Token t)
{
    int onOff;
    onOff = ((int *)data)[0];
    if (onOff == 0 && sState != RADIO_STATE_OFF) {
        setRadioState(RADIO_STATE_OFF);
    } else if (onOff > 0 && sState == RADIO_STATE_OFF) {
        setRadioState(RADIO_STATE_ON);
    }
    RIL_onRequestComplete(t, RIL_E_SUCCESS, NULL, 0);
}

static void requestOperator(void *data __unused, size_t datalen __unused, RIL_Token t)
{
    
    char *response[3];
    memset(response, 0, sizeof(response));
    char line_1[] = "T - Mobile";
    char line_2[] = "TMO";
    char line_3[] = "310260";
    
    response[0] = line_1;
    response[1] = line_2;
    response[2] = line_3;
    RIL_onRequestComplete(t, RIL_E_SUCCESS, response, sizeof(response));
    
}

#define REG_STATE_LEN 15
#define REG_DATA_STATE_LEN 6
static void requestRegistrationState(int request, void *data __unused,
                                        size_t datalen __unused, RIL_Token t)
{
    
    char **responseStr = NULL;
    int elements = 0;
    if (request == RIL_REQUEST_VOICE_REGISTRATION_STATE)
    {
        elements = 15;
    }
    else
    {
        elements = 6;
    }
    responseStr = malloc(elements * sizeof(char *));
    if (!responseStr)
    {
        RIL_onRequestComplete(t, RIL_E_GENERIC_FAILURE, NULL, 0);
        return; 
    }
    memset(responseStr, 0, elements * sizeof(char *));
    asprintf(&responseStr[0], "%d", 1);
    asprintf(&responseStr[1], "%x", -1);
    asprintf(&responseStr[2], "%x", -1);
    if(request == RIL_REQUEST_VOICE_REGISTRATION_STATE)
    {
        asprintf(&responseStr[3], "%d", 0);
    }
    else
    {
        asprintf(&responseStr[3], "%d", 3);
    }
    RIL_onRequestComplete(t, RIL_E_SUCCESS, responseStr, elements*sizeof(responseStr));
    int j;
    for (j = 0; j < elements; j++ ) {
        free(responseStr[j]);
        responseStr[j] = NULL;
    }
    free(responseStr);
    responseStr = NULL;
}

/*** Callback methods from the RIL library to us ***/
/**
 * Call from RIL to us to make a RIL_REQUEST
 *
 * Must be completed with a call to RIL_onRequestComplete()
 *
 * RIL_onRequestComplete() may be called from any thread, before or after
 * this function returns.
 *
 * Will always be called from the same thread, so returning here implies
 * that the radio is ready to process another command (whether or not
 * the previous command has completed).
 */
static void
onRequest (int request, void *data, size_t datalen, RIL_Token t)
{
    ATResponse *p_response;
    int err;
    RLOGD("onRequest: %s", requestToString(request));
    /* Ignore all requests except RIL_REQUEST_GET_SIM_STATUS
     * when RADIO_STATE_UNAVAILABLE.
     */
    if (sState == RADIO_STATE_UNAVAILABLE
        && request != RIL_REQUEST_GET_SIM_STATUS
    ) {
        RIL_onRequestComplete(t, RIL_E_RADIO_NOT_AVAILABLE, NULL, 0);
        return;
    }
    /* Ignore all non-power requests when RADIO_STATE_OFF
     * (except RIL_REQUEST_GET_SIM_STATUS)
     */
    if (sState == RADIO_STATE_OFF
        && !(request == RIL_REQUEST_RADIO_POWER
            || request == RIL_REQUEST_GET_SIM_STATUS)
    ) {
        RIL_onRequestComplete(t, RIL_E_RADIO_NOT_AVAILABLE, NULL, 0);
        return;
    }
    switch (request) {
        case RIL_REQUEST_GET_SIM_STATUS: {
            RIL_CardStatus_v6 *p_card_status;
            char *p_buffer;
            int buffer_size;
            int result = getCardStatus(&p_card_status);
            if (result == RIL_E_SUCCESS) {
                p_buffer = (char *)p_card_status;
                buffer_size = sizeof(*p_card_status);
            } else {
                p_buffer = NULL;
                buffer_size = 0;
            }
            RIL_onRequestComplete(t, result, p_buffer, buffer_size);
            free(p_card_status);
            break;
        }//Fixed
        case RIL_REQUEST_GET_CURRENT_CALLS:
            RIL_onRequestComplete(t, RIL_E_SUCCESS, NULL, 0);
            break;
        case RIL_REQUEST_DIAL:
            RIL_onRequestComplete(t, RIL_E_SUCCESS, NULL, 0);
            break;
        case RIL_REQUEST_HANGUP:
            RIL_onRequestComplete(t, RIL_E_SUCCESS, NULL, 0);
            break;
        
        case RIL_REQUEST_SIGNAL_STRENGTH:
        {
            int numofElements=sizeof(RIL_SignalStrength_v6)/sizeof(int);
            RIL_SignalStrength_v6 response;
            response.GW_SignalStrength.signalStrength = 7;
            response.GW_SignalStrength.bitErrorRate = 99;
            response.CDMA_SignalStrength.dbm = 85;
            response.CDMA_SignalStrength.ecio = 130;
            response.EVDO_SignalStrength.dbm = 90;
            response.EVDO_SignalStrength.ecio = 6;
            response.EVDO_SignalStrength.signalNoiseRatio = 4;
            response.LTE_SignalStrength.signalStrength = 25;
            response.LTE_SignalStrength.rsrp = 9;
            response.LTE_SignalStrength.rsrq = 50;
            response.LTE_SignalStrength.rssnr = 68;
            response.LTE_SignalStrength.cqi = 12;
            RIL_onRequestComplete(t, RIL_E_SUCCESS, &response, sizeof(response));
            break; 
        }//Done
            
            
        case RIL_REQUEST_VOICE_REGISTRATION_STATE:
        case RIL_REQUEST_DATA_REGISTRATION_STATE:
            requestRegistrationState(request, data, datalen, t);
            break;
            
        case RIL_REQUEST_OPERATOR:
            requestOperator(data, datalen, t);
            break;
        case RIL_REQUEST_RADIO_POWER:
            requestRadioPower(data, datalen, t);
            break;
        
       
        
        case RIL_REQUEST_GET_IMSI:
        {
            char imsi[] = "310260000000000";
            RIL_onRequestComplete(t, RIL_E_SUCCESS,
                    imsi, sizeof(char *));
            break;
        }
            
            
        case RIL_REQUEST_GET_IMEI:
        {
            char imei[] = "513288899619895";
            RIL_onRequestComplete(t, RIL_E_SUCCESS,
                   imei, sizeof(char *));
            break;
        }//Fixed
            
        case RIL_REQUEST_SIM_IO:
            requestSIM_IO(data,datalen,t);
            break;
        
       
        case RIL_REQUEST_QUERY_NETWORK_SELECTION_MODE:
        {
            int response = 0;
            RIL_onRequestComplete(t, RIL_E_SUCCESS, &response, sizeof(int));
            break;
        }
        case RIL_REQUEST_IMS_REGISTRATION_STATE: 
        {
            int reply[2] = {0, 1};
            RIL_onRequestComplete(t, RIL_E_SUCCESS, reply, sizeof(reply));
            break;
        }
        case RIL_REQUEST_VOICE_RADIO_TECH:
            {
                int tech = 1;
                RIL_onRequestComplete(t, RIL_E_SUCCESS, &tech, sizeof(tech));
                break;
            }
     
        default:
            RLOGD("Request not supported. Tech: %s", requestToString(request));
            RIL_onRequestComplete(t, RIL_E_REQUEST_NOT_SUPPORTED, NULL, 0);
            break;
    }
}



/**
 * Get the current card status.
 *
 * This must be freed using freeCardStatus.
 * @return: On success returns RIL_E_SUCCESS
 */
static int getCardStatus(RIL_CardStatus_v6 **pp_card_status) {
    static RIL_AppStatus app_status_array[] = {
        // SIM_ABSENT = 0
        { RIL_APPTYPE_UNKNOWN, RIL_APPSTATE_UNKNOWN, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_UNKNOWN, RIL_PINSTATE_UNKNOWN },
        // SIM_NOT_READY = 1
        { RIL_APPTYPE_SIM, RIL_APPSTATE_DETECTED, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_UNKNOWN, RIL_PINSTATE_UNKNOWN },
        // SIM_READY = 2
        { RIL_APPTYPE_SIM, RIL_APPSTATE_READY, RIL_PERSOSUBSTATE_READY,
          NULL, NULL, 0, RIL_PINSTATE_UNKNOWN, RIL_PINSTATE_UNKNOWN },
        // SIM_PIN = 3
        { RIL_APPTYPE_SIM, RIL_APPSTATE_PIN, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_ENABLED_NOT_VERIFIED, RIL_PINSTATE_UNKNOWN },
        // SIM_PUK = 4
        { RIL_APPTYPE_SIM, RIL_APPSTATE_PUK, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_ENABLED_BLOCKED, RIL_PINSTATE_UNKNOWN },
        // SIM_NETWORK_PERSONALIZATION = 5
        { RIL_APPTYPE_SIM, RIL_APPSTATE_SUBSCRIPTION_PERSO, RIL_PERSOSUBSTATE_SIM_NETWORK,
          NULL, NULL, 0, RIL_PINSTATE_ENABLED_NOT_VERIFIED, RIL_PINSTATE_UNKNOWN },
        // RUIM_ABSENT = 6
        { RIL_APPTYPE_UNKNOWN, RIL_APPSTATE_UNKNOWN, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_UNKNOWN, RIL_PINSTATE_UNKNOWN },
        // RUIM_NOT_READY = 7
        { RIL_APPTYPE_RUIM, RIL_APPSTATE_DETECTED, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_UNKNOWN, RIL_PINSTATE_UNKNOWN },
        // RUIM_READY = 8
        { RIL_APPTYPE_RUIM, RIL_APPSTATE_READY, RIL_PERSOSUBSTATE_READY,
          NULL, NULL, 0, RIL_PINSTATE_UNKNOWN, RIL_PINSTATE_UNKNOWN },
        // RUIM_PIN = 9
        { RIL_APPTYPE_RUIM, RIL_APPSTATE_PIN, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_ENABLED_NOT_VERIFIED, RIL_PINSTATE_UNKNOWN },
        // RUIM_PUK = 10
        { RIL_APPTYPE_RUIM, RIL_APPSTATE_PUK, RIL_PERSOSUBSTATE_UNKNOWN,
          NULL, NULL, 0, RIL_PINSTATE_ENABLED_BLOCKED, RIL_PINSTATE_UNKNOWN },
        // RUIM_NETWORK_PERSONALIZATION = 11
        { RIL_APPTYPE_RUIM, RIL_APPSTATE_SUBSCRIPTION_PERSO, RIL_PERSOSUBSTATE_SIM_NETWORK,
           NULL, NULL, 0, RIL_PINSTATE_ENABLED_NOT_VERIFIED, RIL_PINSTATE_UNKNOWN }
    };
    RIL_CardState card_state;
    int num_apps;
    int sim_status = SIM_READY;
    card_state = RIL_CARDSTATE_PRESENT;
    num_apps = 2;
    
    // Allocate and initialize base card status.
    RIL_CardStatus_v6 *p_card_status = malloc(sizeof(RIL_CardStatus_v6));
    p_card_status->card_state = card_state;
    p_card_status->universal_pin_state = RIL_PINSTATE_UNKNOWN;
    p_card_status->gsm_umts_subscription_app_index = RIL_CARD_MAX_APPS;
    p_card_status->cdma_subscription_app_index = RIL_CARD_MAX_APPS;
    p_card_status->ims_subscription_app_index = RIL_CARD_MAX_APPS;
    p_card_status->num_applications = num_apps;
    // Initialize application status
    int i;
    for (i = 0; i < RIL_CARD_MAX_APPS; i++) {
        p_card_status->applications[i] = app_status_array[SIM_ABSENT];
    }
    // Pickup the appropriate application status
    // that reflects sim_status for gsm.
    if (num_apps != 0) {
        // Only support one app, gsm
        p_card_status->num_applications = 2;
        p_card_status->gsm_umts_subscription_app_index = 0;
        p_card_status->cdma_subscription_app_index = 1;
        // Get the correct app status
        p_card_status->applications[0] = app_status_array[sim_status];
        p_card_status->applications[1] = app_status_array[sim_status + RUIM_ABSENT];
    }
    *pp_card_status = p_card_status;
    return RIL_E_SUCCESS;
}

/**
 * Synchronous call from the RIL to us to return current radio state.
 * RADIO_STATE_UNAVAILABLE should be the initial state.
 */
static RIL_RadioState
currentState()
{
    return sState;
}

static int
onSupports (int requestCode __unused)
{
    //@@@ todo
    return 1;
}
static void onCancel (RIL_Token t __unused)
{
    //@@@todo
}
static const char * getVersion(void)
{
    return "SpamDrpid fake-ril 1.0";
}





static void initializeCallback(void *param __unused)
{
    setRadioState (RADIO_STATE_ON);
}


static void *
mainLoop(void *param __unused)
{
    char buf[2048];
    int fd = android_get_control_socket("rild-control");
    if(fd < 0)
    {
        RLOGE("Unable to create udp socket");
        return NULL;
    }

    RIL_requestTimedCallback(initializeCallback, NULL, &TIMEVAL_0);
    sleep(3);
    RLOGD("Ready to start loop");
    for(;;)
    {
        memset(buf, 0 , 2048);
        int rc = read(fd, buf, 2048);

        if (strStartsWith(buf, "time:")) 
        {
            RLOGD("Time Msg");
            RIL_onUnsolicitedResponse (
                RIL_UNSOL_NITZ_TIME_RECEIVED,
                buf + 5, strlen(buf) - 5);
        }
        else if(strStartsWith(buf, "sms:"))
        {
            RLOGD("SMS Msg");
            RIL_onUnsolicitedResponse (
            RIL_UNSOL_RESPONSE_NEW_SMS,
            buf + 4, strlen(buf) - 4);
        }
        else
        {
            RLOGD("Unknown Msg");
        }
    }
    return NULL;
        
}
#ifdef RIL_SHLIB
pthread_t s_tid_mainloop;
const RIL_RadioFunctions *RIL_Init(const struct RIL_Env *env, int argc, char **argv)
{
    int ret;
    int fd = -1;
    int opt;
    pthread_attr_t attr;
    s_rilenv = env;
    
    
    pthread_attr_init (&attr);
    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    ret = pthread_create(&s_tid_mainloop, &attr, mainLoop, NULL);
    return &s_callbacks;
}
#else /* RIL_SHLIB */
int main (int argc, char **argv)
{
   
}
#endif /* RIL_SHLIB */
