#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
		printf(" a is big number ");
	if((b>a)&&(b>c))
		printf(" b is big number ");
	if((c>a)&&(c>b))
		printf("c is big number");
	return 0;
}
