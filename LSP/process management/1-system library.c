#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc,char * argv[])
{
	int ret1,status,ret2;
//	char  *argv[]={"ls","-l",0};
	ret1= fork();
	switch(ret1)
	{
		case -1:
			printf("fork failed");
			break;
		case 0:
			printf("child running\n");
			ret2=execve("/bin/ls",argv,NULL);
			if(ret2==-1)
				printf("execve failed\n");
			exit(0);
			break;
		default:
			printf("parent running\n");
			wait(&status);
			if(status==0)
			{
				printf("child is terminated\n");
			}
	}
	return 0;
	exit(0);
}
