#include<stdio.h>
int main()
{
	int a;
	printf("enter a=");
	scanf("%d",&a);
	a>0?printf("a=%d",a):printf("a=%d",-a);
	return 0;
}
