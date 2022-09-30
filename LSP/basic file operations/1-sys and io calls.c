//the default i/o calls uses the page size to transfer the data
//system calls uses the required data
//the size of each paage is synced with the standard i/o calls

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	int fd1,fd2,fd3;
	char ch1,ch2[1024];
	fd1=open("text1",O_RDWR|O_CREAT,0660);
	fd2=open("text2",O_RDWR|O_CREAT,0660);
	//copy using system calls
	
	for(;fd3;)                            //when the file is empty then read fails
	{
		fd3=read(fd1,&ch1,1);
		write(fd2,&ch1,1);
	}

	//copy using i/o calls
	
//	fgets(ch2,1024,text1);
//	fputs(ch2,text2);
return 0;
	
}
