#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a=%d is the biggest number",a);
		}
		else
		{
			printf("c=%d is the biggest number",c);
		}
	}
	else
	{
		if(b>c)
		{

			printf("b=%d is the biggest number",b);
		}
		else
		{
			printf("c=%d is the biggest number",c);
		}
	}
}
