#include<stdio.h>
int rev(int n)
{
	int b,i=1,c=0,d;
	while(i==1)
	{
		d=c*10;
		b=n%10;
		n=n/10;
		c=d+b;
		if(n==0)
		{
			i=0;
			break;
		}
	}
	return c;
}
int main()
{
	int n,a;
	printf("enternumber =");
	scanf("%d",&n);
	a=rev(n);
	printf("%d",a);
	return 0;
}
