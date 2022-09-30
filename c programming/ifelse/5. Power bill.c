#include<stdio.h>
int main()
{
	int n;
	printf("enter no.of units=");
	scanf("%d",&n);
	if(n>600)
		printf("bill=%f",390+(n-600)*1.0);
	else if(n>400)
		printf("bill=%f",230+(n-400)*0.80);
	else if(n>200)
		printf("bill=%f",100+(n-200)*0.65);
	else if(n<=200)
		printf("bill=100");
	else
		printf("please re-enter n value");
}

