#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	a>b?printf("a=%d is bigger than b=%d",a,b):printf("b=%d is bigger than a=%d",b,a);
	return 0;
}
