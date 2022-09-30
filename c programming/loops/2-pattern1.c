#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	printf("enter no.of times value n=");
	scanf("%d",&n);
	while(i<=n)
	{
		while(j<=i)
		{
		printf("*");
		j=j+1;
		}
		printf("\n");
		i=i+1;
		j=1;
	}

}
