#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
	int fd1,fd2,bits=0,b=0,i,j;
	char a,str[1024];
	fd1=open("file3",O_RDONLY);
	if(fd1==3)
	{
		for(i=0 ;(fd2) &&(bits<10);i++)
		{
                    fd2=read(fd1,&a,1);
		    if(a=='\n')
			    bits=bits+1;
		    write(1,&a,1);

		}
           

	}
	return 0;
}
