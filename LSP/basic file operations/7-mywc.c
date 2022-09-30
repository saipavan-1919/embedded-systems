#include<stdio.h>

#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main(int argc, char * argv[] )
{
      	char a;
	int fd1,fd2,count=0,i,words=0;
	fd1=open(argv[1],O_RDONLY);
	for(i=0;fd2;i++)
	{
		fd2=read(fd1,&a,1);
		if(a=='\n')
			count=count+1;
		if(a==' ')
			words=words+1;



	}
	printf("no of lines=%d\n",count-1);
	printf("no of words=%d\n",count+words-1);
	printf("no of bytes=%d\n",i-1);
}

