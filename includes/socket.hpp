#ifndef SOCKET_HPP
#define SOCKET_HPP

#include <netinet/in.h>
#include <sys/socket.h>

class Socket {
   public:
	Socket();
	virtual ~Socket();

	enum {
		CLIENT_TYPE,
		SERVER_TYPE
	};

	const int &GetType() const;
	const int &GetSocketDescriptor() const;

   protected:
	int type_;
	int sock_d_;
	struct sockaddr_in address_;
};

#endif
