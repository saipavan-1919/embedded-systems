#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main()
{
	int a,b,i=0;
	char c;
	int (*fp[4])(int,int)={add,sub,mul,div};
	printf("enter data\n");
	scanf("%d",&a);
	scanf("%c",&c);
	scanf("%d",&b);
	if(c=='+')
		i=0;
	else if(c=='-')
		i=1;
	else if(c=='*')
		i=2;
	else if(c=='/')
		i=3;

	printf("=%d",(fp[i])(a,b));
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
