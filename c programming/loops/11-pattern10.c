#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n value=");
	scanf("%d",&n);
	for(i=1,j=1;(i<=n)&&(j<=i);)
	{
		printf("*");
		if(j==i)
		{
			i++;
			j=1;
			printf("\n");
		}
		else
			j=j+1;
	}
}
