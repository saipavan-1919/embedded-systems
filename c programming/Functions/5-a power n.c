 
#include<stdio.h>
int power(int a,int n)
{
	int c,i;
	c=a;
	if(n==0)
		c=1;
	else if(n>0)
		for(i=2;i<=n;i++)
		c=c*a;
	else if(n<0)
		for(i=-2;i>=n;i--)
			c=c*a;
	return c;
}
int main()
{
	int a,n,b;
	printf("enter a and n values=");
	scanf("%d%d",&a,&n);
        b=power(a,n);
	if(n>=0)
		printf(" %d power %d = %d",a,n,b);
	else
		printf(" %d power %d = 1/%d",a,n,b);
	return 0;
}