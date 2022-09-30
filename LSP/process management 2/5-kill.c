#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>
#include<stdlib.h>

int main(int argc,char * argv[])
{
	int pid;
    printf("enter pid of the process = ");
	scanf("%d",&pid);
	ret=kill(pid,SIGKILL);
	if(ret==-1)
	{
		printf("kill failed");
	}
	else
		printf("kill success");
	exit(0);

}
