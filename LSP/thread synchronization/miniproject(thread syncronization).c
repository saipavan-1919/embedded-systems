#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<pthread.h>
#include<signal.h>

pthread_t a,b;
int  pid;
char buff[5];
int counter=0;
void *exit_status;

void *producer();
void *consumer();

void producerhandler()
{
	(void) signal(SIGUSR1,SIG_IGN);
}
void consumerhandler()
{
	(void) signal(SIGUSR1,SIG_IGN);
}
int main()
{
	int ret1,ret2;
	ret1=pthread_create(&a,NULL,producer,NULL);
	if(ret1!=0)
	{
		printf("producer thread creation failed");
		exit(0);
	}

	ret2=pthread_create(&b,NULL,consumer,NULL);
	if(ret2!=0)
	{
		printf("consumer thread creation failed");
		exit(0);
	}
		pthread_join(a,&exit_status);




}

void *producer()
{
	(void) signal(SIGUSR1,producerhandler);
	for(;counter!=5;)
	{
		buff[counter]=counter+65;
		printf("%c",buff[counter]);
		counter++;
	}
	pthread_kill(b,SIGUSR1);
		pthread_join(b,&exit_status);
//	pthread_exit("exit");
}

void *consumer()
{
	(void) signal(SIGUSR1,consumerhandler);
	pause();
	for(;counter>=0;)
	{
		printf("%c",buff[counter]);
		counter--;
	}
	
       pthread_kill(a,SIGUSR1);
//	pthread_exit("exit");


}
