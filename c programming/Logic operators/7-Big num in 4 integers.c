#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter four numbers a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if((a>b)&&(a>c)&&(a>d))
		printf(" a is big number ");
	if((b>a)&&(b>c)&&(b>d))
		printf(" b is big number ");
	if((c>a)&&(c>b)&&(c>d))
		printf("c is big number");
	if((d>a)&&(d>b)&&(d>c))
		printf(" d is big number ");
	return 0;
}
