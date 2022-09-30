#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
     	int fd;
	char str[100];
	fd=open("echo_file",O_RDONLY | O_CREAT);   //content enterd in echo_file will be printed 
	read(fd,str,10);
	printf("%s",str);
	return 0;
}
