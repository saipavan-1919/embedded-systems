#include<stdio.h>
int product(int a,int b)
{
	int c,i,d;
	d=a;
	for(i=2;i<=b;i++)
		a=a+d;
	c=a;
	return c;

}
int main()
{
	int a,b,mul;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	mul=product(a,b);
	printf("mul = %d",mul);
	return 0;
}
