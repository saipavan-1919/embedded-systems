#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>

void *even();
void *odd();

int num=0;

int main()
{
	pthread_t a_thread,b_thread;
	void *thread_result;
	int ret1,ret2;

	ret1=pthread_create(&a_thread,NULL,even,NULL);
	if(ret1!=0)
	{
		printf("even thread creation failed");
		exit(0);
	}

	ret2=pthread_create(&b_thread,NULL,odd,NULL);
	if(ret2!=0)
	{
		printf("odd thread creation failed");
		exit(0);
	}

//	while(1)
//	{
		pthread_join(a_thread,&thread_result);
		pthread_join(b_thread,&thread_result);
//	}
	exit(0);
}
void *even()
{
	while(1)
	{
	if(num%2==0)
	{
		printf("even=%d\n",num);
		num++;
	}
        }
		pthread_exit("thank you");
}
void *odd()
{
	while(1)
	{
	if(num%2!=0)
	{
		printf("odd=%d\n",num);
		num++;
	}
	}
		pthread_exit("thank you");
}
