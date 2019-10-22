#ifndef __IPERF_CLIENT_H__
#define __IPERF_CLIENT_H__

#include "osal/osal.h"

#define IPERF_SERVER_IP_CHAR_LEN                    (20)
typedef struct {
    OS_Thread_t             iperf_client_thread;
    int                     server_port;
    char                    server_ip[IPERF_SERVER_IP_CHAR_LEN];
	unsigned char* 			send_buf;
} iperf_client_t;

int iperf_client_init(int server_port, char *server_ip);

#endif /* __IPERF_CLIENT_H__ */

