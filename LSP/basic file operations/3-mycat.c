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
	int fd1,fd2;
	fd1=open("file5",O_RDONLY);
        if(fd1<0)
	{
		perror("open fail");
		exit(0);
	}
	for(;fd2;)	
	{
	fd2=read(fd1,str,1024);
        write(1,str,1024);
	}
	return 0;
}
