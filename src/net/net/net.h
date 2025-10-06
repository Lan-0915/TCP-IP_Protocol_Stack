/**
 * @brief TCP/IP协议栈初始化
 */
#ifndef NET_H
#define NET_H

#include "net_err.h"

net_err_t net_init (void);
net_err_t net_start(void);

#endif // NET_H
