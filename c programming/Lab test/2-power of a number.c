#include<stdio.h>
int mul(int p,int a)
{
	int c;
	c=p;
	for(int i=1;i<a;i++)
	{
		p=p+c;
	}
	return p;
}
int main()
{
	int a,n,p=1;
	printf("enter a and n values=");
	scanf("%d%d",&a,&n);
	for(int i=1;i<=n;i++)
	{
	      p=mul(p,a);
	}
	printf("%d",p);
}
