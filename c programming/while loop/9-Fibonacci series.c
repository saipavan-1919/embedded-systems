#include<stdio.h>
int main()
{

	int a=0,b=0,c=1,n,i=1;
	printf("enter n value =");
	scanf("%d",&n);
	printf("fibonacci series =\n");
	while(i<=n)
	{
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
		i=i+1;
	}
	return 0;
}
