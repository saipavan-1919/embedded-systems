#include<stdio.h>

int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int invokeptr(int (*)(int,int),int,int);

int main()
{
	int a,b,s;
	char c;
	int (*fp)(int,int);
	printf("enter data\n");
	scanf("%d",&a);
	scanf("%c",&c);
	scanf("%d",&b);
	if(c=='+')
		fp=add;
	else if(c=='-')
		fp=sub;
	else if(c=='*')
		fp=mul;
	else if(c=='/')
		fp=div;

	s=invokeptr(fp,a,b);
	printf("=%d",s);


}
int invokeptr(int (*fp)(int,int),int a,int b)
{
	int s;
	s=fp(a,b);
	return s;
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
