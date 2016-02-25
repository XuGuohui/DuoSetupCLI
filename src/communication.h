#ifndef _COMMUNICATION_H_
#define _COMMUNICATION_H_

#define DUO_SERVER_IP_ADDRESS         "192.168.0.1"
#define DUO_SERVER_OTA_PORT           50007
#define DUO_SERVER_CMD_PORT           5609

int ConnectToClient(SOCKET *sclient, const char *ipAddr, uint16_t port);


#endif
