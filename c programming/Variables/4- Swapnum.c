#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a and b values");
	scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("a=%d and b=%d",a,b);
	return 0;
}
