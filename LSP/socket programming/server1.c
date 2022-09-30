
//server

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include<pthread.h>


void *thread();

int server_sockfd, client_sockfd;
int server_len, client_len;

int main()
{
	pthread_t a;
	pthread_create(&a,NULL,thread,NULL);
	void *exit_status;


    struct sockaddr_un server_address;
    struct sockaddr_un client_address;

/*  Remove any old socket and create an unnamed socket for the server.  */

    unlink("abc_socket");
    server_sockfd = socket(AF_LOCAL, SOCK_STREAM, 0);

/*  Name the socket.  */

    server_address.sun_family = AF_UNIX;
    strcpy(server_address.sun_path, "abc_socket");
    server_len = sizeof(server_address);
    bind(server_sockfd, (struct sockaddr *)&server_address, server_len);

/*  Create a connection queue and wait for clients.  */

    listen(server_sockfd, 5);


        printf("server waiting\n");

/*  Accept a connection.  */

        client_len = sizeof(client_address);
        client_sockfd = accept(server_sockfd, 
            (struct sockaddr *)&client_address, &client_len);

/*  We can now read/write to client on client_sockf:d.  */
    while(1)
   {
            char ch[1024];
	
	   read(client_sockfd,ch,1024);
	    printf("rec=%s",ch);

	}
        close(client_sockfd);
}
void *thread()
{
	char buff[1024];
	while(1)
	{

    read(0,buff,1024);
    write(client_sockfd, buff, 1024);
	}


}




