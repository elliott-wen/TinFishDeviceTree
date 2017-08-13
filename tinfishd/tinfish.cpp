#define LOG_TAG "TINFISHD"

#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <fcntl.h>  
#include <sys/select.h> 
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h> 
#include <sys/ioctl.h>  
#include <log/log.h>



struct Deamon_Payload_Header
{
    unsigned char version;
    unsigned char msg_type;
    unsigned int msg_id;
    unsigned int msg_length;
};
#define BUFSIZE 2048
#define RILDCMD 1
#define SENSORCMD 2
#define CAMERACMD 3
//char *socket_path = "./socket";
const char RILD_PATH[] = "/dev/socket/rild-control";
const char SENSOR_PATH[] = "/data/misc/sensor-control";
const char CAMERA_PATH[] = "/dev/socket/camera-control";
const int DEAMON_PORT = 23456;




static void prepareAddr(sockaddr_un *addr, const char *path)
{
  memset(addr, 0, sizeof(*addr));
  addr->sun_family = AF_UNIX;
  strncpy(addr->sun_path, path, sizeof(addr->sun_path)-1);
}

static bool createNetworkUDPSocket(int *rfd, int port)
{
  struct sockaddr_in addr;
  
  int fd;

  if ( (fd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) 
  {
    ALOGE("Unable to create udp socket");
    return false;
  }

  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;  
  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = htonl(INADDR_ANY);  

   

  if (bind(fd, (struct sockaddr*)&addr, sizeof(addr)) == -1) 
  {
     ALOGE("bind local tcp socket error");
    return false;
  }



  *rfd = fd;
  return true;
}



int main(int argc, char *argv[]) {
  
  int deamon_fd = -1;
  int local_unix_fd = -1;
  bool running = true;
  char buf[BUFSIZE];
  sockaddr_un rildaddr, sensoraddr, cameraaddr;
  prepareAddr(&rildaddr, RILD_PATH);
  prepareAddr(&sensoraddr, SENSOR_PATH);
  prepareAddr(&cameraaddr, CAMERA_PATH);
  
  if(!createNetworkUDPSocket(&deamon_fd, DEAMON_PORT))
  {
     ALOGE("Unable to start deamon socket");
    return -1;
  }

  if ( (local_unix_fd = socket(AF_UNIX, SOCK_DGRAM, 0)) == -1) 
  {
    ALOGE("Unable to start unix socket");
    return -1;
  }
  int rc = 0;
  struct sockaddr clientaddr;
  socklen_t socklen = sizeof(clientaddr);
  while(running)
  {     
       rc = recvfrom(deamon_fd, buf, BUFSIZE, 0, &clientaddr, &socklen);
       if(rc<=sizeof(Deamon_Payload_Header))
       {
             ALOGE("Unable to handle udp error! exit");
            return -1;
       }

       Deamon_Payload_Header* header = (Deamon_Payload_Header*) buf;
       if(header->msg_length!= rc - sizeof(Deamon_Payload_Header))
       {
            ALOGW("Bad UDP packet\n");
            continue;
       }
       if(header->msg_type == SENSORCMD)
       {
            
            rc = sendto(local_unix_fd, buf + sizeof(Deamon_Payload_Header), header->msg_length, 0, (const sockaddr*)&sensoraddr, sizeof(sensoraddr));
            ALOGD("Sensor msg: %d\n", rc);
       }
       else if (header->msg_type == RILDCMD)
       {
           
            rc = sendto(local_unix_fd, buf + sizeof(Deamon_Payload_Header), header->msg_length, 0, (const sockaddr*)&rildaddr, sizeof(rildaddr));
             ALOGD("Rild msg, %d\n", rc);
       }
       else if(header->msg_type == CAMERACMD)
       {
             ALOGD("Camera msg\n");
            sendto(local_unix_fd, buf + sizeof(Deamon_Payload_Header), header->msg_length, 0, (const sockaddr*)&cameraaddr, sizeof(cameraaddr));
       }
       else
       {
             ALOGW("Bad UDP packet: Unknown Commands\n");
       }
  }
  


  return 0;
}