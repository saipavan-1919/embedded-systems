#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	printf("sum of two numbers=%d",*p1+*p2);
	return 0;
}
