
#include<stdio.h>
int main()
{
	int i,j,n,a=1;
	printf("enter no.of times value n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d",a);
		}
		printf("\n");
		j=1;
		a=a+1;
	}

}
