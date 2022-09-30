#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/mman.h>
#include<stdlib.h>
#include<errno.h>
int main(int argc,char * argv[])
{
	if(argc!=3)
	{
		printf("not enough arguments,give two files to copy\n");
		exit(0);
	}	
	int fd1,fd2,size1,size2;
	char *addr1,*addr2,*temp1,*temp2;
	struct stat temp3;
	struct stat temp4;

	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("open 1 fails");
		exit(0);
	}
	fstat(fd1,&temp3);
	size1=temp3.st_size;
	printf("size of file1=%d\n",size1);
	addr1=(char *)mmap(0,size1,PROT_READ,MAP_PRIVATE,fd1,0);
	temp1=addr1;

	fd2=open(argv[2],O_RDWR);
	fallocate(fd2,0,0,size1);
	if(fd2<0)
	{
		perror("open2 fails");
		exit(0);
	}
	fstat(fd2,&temp4);
	size2=temp4.st_size;
	printf("size of file1=%d\n",size2);
	addr2=(char *)mmap(0,temp4.st_size,PROT_WRITE |PROT_READ ,MAP_SHARED,fd2,0);
	temp2=addr2;

	for(int i=0;i<temp3.st_size;i++)
	{
	 	*addr2=*addr1;
		addr1++;
		addr2++;
		
	}

	close(fd1);
	close(fd2);
	munmap(temp1,temp3.st_size);
	munmap(temp2,temp4.st_size);
	return 0;
}
