#include<stdio.h>
int series(int n)
{
	int a=0,b=0,i;
        for(i=1;i<=n;i++)
	{
		a=(a*10)+1;
		printf("%d\n",a);
		b=b+a;
	}
	return b;
}
int main()
{
	int n,c;
	printf("enter n value");
	scanf("%d",&n);
	c=series(n);
	printf("sum of series = %d",c);
	return 0;

}
