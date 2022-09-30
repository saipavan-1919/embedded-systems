#include<stdio.h>
#include<unistd.h>       //read,write,exit,
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>

int main()
{
	char str[1024];
	int fd1,fd2,fd3;
	fd1=open("file5",O_RDONLY);
	fd2=open("file6",O_WRONLY|O_CREAT,0664);
        if(fd1<0||fd2<0)
	{
		perror("open fail");
		exit(0);
	}
	for(;fd3;)	
	{
	fd3=read(fd1,str,1024);
	write(fd2,str,1024);
	}
	close(fd1);
	close(fd2);
	return 0;
}
