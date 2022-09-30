#include<stdio.h>
int main()
{
	int a,b,t,sub=0,s;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	t=(~b)+0X01;
	sub=a+t;
	printf("sub=%d",sub);
	return 0;
}
