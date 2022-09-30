#include<stdio.h>
int main()
{
	int n,extra;
	float bill;
	printf("Enter no.of calls = ");
	scanf("%d",&n);

	if((n>=0)&&(n<=200))
	{
		printf("bill=%f",100);
	}
	if((n>=201)&&(n<=400))
	{
		extra=n-200;
		printf("bill=%f",100+(extra*0.65));
	}
	if((n>=401)&&(n<=600))
	{
		extra=n-400;
		printf("bill=%f",230+(extra*0.80));
				}

        if(n>=600)
	{
	        extra=n-600;
		printf("bill=%f",390+(extra*1.00));
		}
		return 0;
		}
