#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> 

#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(param) close(param)

#define PORT 23

typedef int SOCKET;
typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;

int main(){


SOCKADDR_IN sin;
SOCKET sock;
socklen_t recsize = sizeof(sin);

SOCKADDR_IN csin;
SOCKET csock;
socklen_t crecsize = sizeof(csin);

int sock_err;



sock = socket(AF_INET, SOCK_STREAM, 0)

struct sockaddr_in
{
	short sin_family;
        unsigned short   sin_port;
        struct   in_addr   sin_addr;
       	char   sin_zero[8];
};

SOCKADDR_IN sin;
sin.sin_addr.s_addr = htonl(INADDR_ANY);   
sin.sin_family = AF_INET;
sin.sin_port = htons(23);

bind(sock, (SOCKADDR*)&sin, sizeof(sin));

listen(sock, 5);

socklen_t taille = sizeof(csin);
csock = accept(sock, (SOCKADDR*)&csin, &taille);

int closesocket(int sock);



return EXIT_SUCCESS;
}

