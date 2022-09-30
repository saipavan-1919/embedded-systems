#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>

void *producer();
void *consumer();

int count=0;

int main()
{
	int ret1,ret2;
	void *thread_result;
	pthread_t a_thread,b_thread;

   ret1=pthread_create(&a_thread,NULL,producer,NULL);     //producer thread creation
   if(ret1!=0)
   {
	   printf("producer thread creation is failed");
	   exit(0);
   }

   ret2= pthread_create(&b_thread,NULL,consumer,NULL);     //consumer thread creeation
   if(ret2!=0)
   {
	   printf("consumer thread creation failed");
	   exit(0);
   }

   pthread_join(a_thread, &thread_result);

   pthread_join(b_thread, &thread_result);

   exit(0);


}
void *producer()
{
//	while(1)
//	{
	while(count!=5)
	{
		printf("count=%d\n",count);
		count++;
	}
//	}
	pthread_exit("thank you for the cpu time");
}
void *consumer()
{
//	while(1)
//	{
	while(count!=0)
	{
		printf("count=%d\n",count);
		count--;
	}
//	}
   pthread_exit("thank you");
}
