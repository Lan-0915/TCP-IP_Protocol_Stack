/**
 * @brief 简单的TCP回显服务器程序
 * @note 该程序仅限在Mac和Linux编程上编译通过，Windows由于套接字接口不同编译会失败
 */
#ifndef TCP_ECHO_SERVER_H
#define TCP_ECHO_SERVER_H

void tcp_echo_server_start(int port);

#endif // TECHO_H
