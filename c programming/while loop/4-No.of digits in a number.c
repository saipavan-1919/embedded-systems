#include<stdio.h>
int main()
{
	int num,i=0,a=1;
	printf("enter number n=");
	scanf("%d",&num);
	while(a==1)
	{
		num=num/10;
		i=i+1;
		if(num==0)
			a=0;
	}
	printf("no.of digits = %d",i);
}
