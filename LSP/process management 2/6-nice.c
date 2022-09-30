#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
	int ret,n;
	printf("enter priority value (-20 to +19) =");
	scanf("%d",&n);
	ret=nice(n);
	if(ret==-1)
	{
		printf("nice failed\n");
		exit(0);
	}
	printf("new priority of process=%d",ret);
	getchar();
	getchar();
	return 0;

}
