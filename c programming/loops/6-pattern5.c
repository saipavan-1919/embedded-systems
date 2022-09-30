#include<stdio.h>
int main()
{
	int i,j,n,b;
	printf("enter no.of times value n=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			b=1;
		else
			b=0;
		for(j=1;j<=i;j++)
		{
		if(b==0)
			b=1;
		else
			b=0;

		printf("%d",b);
		}
		printf("\n");
		j=1;
	}

}
