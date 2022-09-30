#include<stdio.h>
int main()
{
	int  a,b,c;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	while(b!=0)
        {
	c=a&b;
	a=a^b;
	b=c<<1;

	}
	printf("%d",a);
}
