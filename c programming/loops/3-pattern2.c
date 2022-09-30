#include<stdio.h>
int main()
{
	int i,j,n,a;
	printf("enter n value=");
	scanf("%d",&n);
	a=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("*");
		}
		printf("\n");
		a=a-1;
	}
}
