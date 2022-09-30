#include<stdio.h>
void addstock(int);
extern int stock;
void purchase()
{
	int n;
	printf("enter no .of items required to purchase=");
	scanf("%d",&n);
	if(stock+n>1000)
	{
		printf("sorry we do not have enough place to store stock\n");
	}
	else
	{
		addstock(n);
	}

}
