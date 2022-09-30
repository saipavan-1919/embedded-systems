#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<linux/input.h>
#include<errno.h>

int main(int argc,char * argv[])
{
	if(argc!=2)
	{
		printf("no arguments");
		exit(0);
	}
	char name[256];
	int fd1;
	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("open fails");
		exit(0);
	}
	ioctl(fd1, EVIOCGNAME(sizeof(name)),name);
	printf("%s",name);
	return 0;
}
