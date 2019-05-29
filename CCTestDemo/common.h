//
//  common.h
//  CCTestDemo
//
//  Created by lufei on 2019/3/21.
//  Copyright © 2019年 路飞. All rights reserved.
//

#ifndef common_h
#define common_h

#include <iostream>
#include <string>
#include <vector>







#endif /* common_h */



/* Socket  https://blog.csdn.net/gaoyi742892115/article/details/80503870
 
 socket起源于Unix，而Unix/Linux基本哲学之一就是“一切皆文件”，
 都可以用“打开open –> 读写write/read –> 关闭close”模式来操作。
 我的理解就是Socket就是该模式的一个实现，socket即是一种特殊的文件，一些socket函数就是对其进行的操作（读/写IO、打开、关闭）

 
 
 网络层"ip地址"(唯一识别网络中的主机)
 传输层"协议+端口"(唯一识别主机中的应用程序(进程))
 
 socket基本操作
 
 1. socket()函数  int socket(int domain, int type, int protocol);
 
 domain：即协议域，又称为协议族（family）。常用的协议族有，AF_INET、AF_INET6、AF_LOCAL（或称AF_UNIX，Unix域socket）、AF_ROUTE等等。协议族决定了socket的地址类型，在通信中必须采用对应的地址，如AF_INET决定了要用ipv4地址（32位的）与端口号（16位的）的组合、AF_UNIX决定了要用一个绝对路径名作为地址。
 type：指定socket类型。常用的socket类型有，SOCK_STREAM、SOCK_DGRAM、SOCK_RAW、SOCK_PACKET、SOCK_SEQPACKET等等（socket的类型有哪些？）。
 protocol：故名思意，就是指定协议。常用的协议有，IPPROTO_TCP、IPPTOTO_UDP、IPPROTO_SCTP、IPPROTO_TIPC等，它们分别对应TCP传输协议、UDP传输协议、STCP传输协议、TIPC传输协议（这个协议我将会单独开篇讨论！）。

 
 2. bind()函数  int bind(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
 
 3. listen()函数  int listen(int sockfd, int backlog);
 
 4. connect()函数  int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen);
 
 5. accept()函数  int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
 
 6. read(), write()函数
 
 read()/write()
 recv()/send()
 readv()/writev()
 recvmsg()/sendmsg()
 recvfrom()/sendto()

 7. close()函数  int close(int fd);
 
 socket TCP三次握手
 
 
 */
