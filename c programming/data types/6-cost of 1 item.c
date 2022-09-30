#include<stdio.h>
int main()
{
	int n,sp,profit,cp,cp1;
	printf("enter no.of items n=");
	scanf("%d",&n);
	printf("enter sale price and profit on n items=");
	scanf("%d%d",&sp,&profit);
	cp=sp-profit;
	printf("cost price of n items cp=%d",cp);
	cp1=cp/n;
	printf("cost price of 1 item=%d",cp1);
	return 0;
}
