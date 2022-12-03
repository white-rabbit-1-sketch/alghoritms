#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include "EchoServer.hpp"

using namespace std;

namespace alg {
    void EchoServer::start(int port)
    {
        int serverFd, newSocket;
        struct sockaddr_in address;
        int addrlen = sizeof(address);
        int opt = 1;
        char buffer[1024] = { 0 };
 
        serverFd = socket(AF_INET, SOCK_STREAM, 0);
 
        setsockopt(serverFd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt));
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = INADDR_ANY;
        address.sin_port = htons(port);
 
        bind(serverFd, (struct sockaddr*) &address, sizeof(address));
        listen(serverFd, 1000);
        newSocket = accept(serverFd, (struct sockaddr*) &address, (socklen_t*) &addrlen);
    
        while (true) {
            read(newSocket, buffer, 1024);
            send(newSocket, buffer, strlen(buffer), 0);
        }
        
        close(newSocket);
        shutdown(serverFd, SHUT_RDWR);
    }
}