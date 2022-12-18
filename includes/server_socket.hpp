#ifndef SERVER_SOCKET_HPP
#define SERVER_SOCKET_HPP

#include <fcntl.h>

#include <cstdlib>
#include <iostream>

#include "socket.hpp"

class ServerSocket : public Socket {
   public:
	static const int BACK_LOG_QUEUE;
	ServerSocket(const std::string &host, const std::string &port);
	~ServerSocket();

	void ReadyToAccept();
	int AcceptClient();

   private:
	ServerSocket();
	void CreateSocket(const std::string &host, const std::string &port);
	int BindSocket(struct addrinfo *result);
	void ListenSocket();
};

#endif
