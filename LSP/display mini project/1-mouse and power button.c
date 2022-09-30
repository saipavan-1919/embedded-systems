#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<linux/input.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
        fd_set read_fileset;
	int fd1,fd2,ret;
	char buff[2];
	 struct input_event ev;

	fd1=open("/dev/input/event0",O_RDONLY);  //power button
	if(fd1<0)
	{
		perror("open fails");
		exit(0);
	}
	fd2=open("/dev/input/event5",O_RDONLY);  //mouse
	if(fd2<0)
	{
		perror("open fails");
		exit(0);
	}
	FD_ZERO(&read_fileset);
	printf("no of devices=%d",FD_SETSIZE);

	while(1)
	{
	FD_SET(fd1,&read_fileset);
	FD_SET(fd2,&read_fileset);


	select(FD_SETSIZE,&read_fileset,NULL,NULL,0);
	if(FD_ISSET(fd1,&read_fileset))
	{
	printf("reading power button data\n");
	 ret = read(fd1,&ev,sizeof(struct input_event));
                        printf("ret:%d ev.type:%d ev.code:%d ev.value:%d\n",ret,ev.type,ev.code,ev.value);

	}
	if(FD_ISSET(fd2,&read_fileset))
	{
	printf("reading mouse data\n");
	   ret = read(fd2,&ev,sizeof(struct input_event));
                        printf("ret:%d ev.type:%d ev.code:%d ev.value:%d\n",ret,ev.type,ev.code,ev.value);

	}
	}
        return 0;
}
