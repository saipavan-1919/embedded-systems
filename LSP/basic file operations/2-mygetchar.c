#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
        int fd;
	char c;
	write(1,"enter char = ",13);
	fd = read(0,&c,1);
	printf("char=%c\nfd=%d",c,fd);
     	
	return 0;
}
