#include<stdio.h>
int main()
{
	int num,a=1,num1;
	printf("enter number= ");
	scanf("%d",&num);
	num1=num;
	while(a<num1)
	{
		num=num*a;
		a=a+1;
	}
	printf("factorail of number =%d",num);
}
