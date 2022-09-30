#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
	if(argc!=2)
	{
		write(1,"error no arguments",18);
		exit(0);
	}
	int fd1,fd2,i=0;
	char a,size;
	fd1=open(argv[1],O_RDONLY | O_CREAT,0664);
	if(fd1<0)
	{
		perror("open FAIL");
		exit(0);
	}
	for(;fd2;)
	{
		fd2=read(fd1,&a,1);
		i=i+1;
	}
	write(1,"disk usage=",11);
	size=((i/4096)+1)*4;
	printf(" %dkb\n ",size);
	close(fd1);
	return 0;

}
