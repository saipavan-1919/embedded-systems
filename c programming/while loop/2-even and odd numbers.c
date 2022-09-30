#include<stdio.h>
int main()
{
	int m,n;
	printf("enter m and n values =");
	scanf("%d%d",&m,&n);
	while (m<=n)
	{
		if(m%2==0)
			printf("even numbers = %d",m);
		else
			printf(" odd numbers = %d",m);
		m=m+1;
	}
}
