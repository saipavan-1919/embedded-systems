#include<stdio.h>
int main()
{
	int i,j,n,b;
	printf("enter n value=");
	scanf("%d",&n);
	b=n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<b)
			{
			printf(" \b ");
			}
			else
			{
				printf("*");
			}
		}
		j=1;
		b=b-1;
		printf("\n");
	}
}
