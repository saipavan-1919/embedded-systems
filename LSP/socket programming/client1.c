

//client

#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include<pthread.h>

void *thread();

int server_sockfd;

int main()
{
	pthread_t b;
	pthread_create(&b,NULL,thread,NULL);
	void *exit_status;

    int len;
    struct sockaddr_un address;
    int result;


/*  Create a socket for the client.  */

    server_sockfd = socket(AF_UNIX, SOCK_STREAM, 0);

/*  Name the socket, as agreed with the server.  */

    address.sun_family = AF_UNIX;
    strcpy(address.sun_path, "abc_socket");
    len = sizeof(address);

/*  Now connect our socket to the server's socket.  */


    result = connect(server_sockfd, (struct sockaddr *)&address, len);


    if(result == -1) {
        perror("oops: client1");
        exit(1);
    }


    while(1)
    {
    char ch[1024];

/*  We can now read/write via sockfd.  */

    read(0,ch,1024);
    write(server_sockfd, ch, 1024);


}
    
    close(server_sockfd);
    exit(0);
}

void *thread()
{
	char buff[1024];
	while(1)
	{
	   read(server_sockfd,buff,1024);
	    printf("rec=%s",buff);

	}

}

