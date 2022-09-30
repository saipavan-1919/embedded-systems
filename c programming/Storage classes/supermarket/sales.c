#include<stdio.h>
void deletestock(int);
extern int stock;
void sales()
{
	int n;
	printf("enter no.of items required=");
	scanf("%d",&n);
	if(stock>=n)
	{
		deletestock(n);
	}
	else 
	{
		printf("soory we do not have enough stock\n");
	}

}
