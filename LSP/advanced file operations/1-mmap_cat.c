#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include<sys/mman.h>

int main(int argc, char * argv[])
{
	if(argc!=2)
	{
		printf("sorry,no arguments passed\n");
		exit(0);
	}
	struct stat temp;
	int fd1;
	int size;
	char *umap,*addr;
	fd1=open(argv[1],O_RDONLY);
	fstat(fd1,&temp);
	size=temp.st_size;
	printf("size of file=%d\n",size);
	addr=(char *) mmap(0,size,PROT_READ,MAP_PRIVATE,fd1,0);       //addr= indicates address of memory mapping happened
	umap=addr;
	for(int i=0;i<size;i++)
	{
		printf("%c",*addr);                                   
		addr++;                                               //the address should be increased to indicate next address
	}
	close(fd1);
       	munmap(umap,size);
	return 0;
}
