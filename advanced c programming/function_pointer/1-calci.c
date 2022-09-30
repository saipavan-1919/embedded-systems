#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main()
{
	int a,b;
	char c;
	int (*fp)(int,int);
	printf("enter data\n");
//	printf("enter first number=");
	scanf("%d",&a);
//	printf("enter operation = ");
	scanf("%c",&c);
//	printf("enter second number =");
	scanf("%d",&b);

	switch (c)
	{
		case '+':
			fp=add;
			break;
		case '-':
			fp=sub;
			break;
		case '*':
			fp=mul;
			break;
		case '/':
			fp=div;
			break;
	}

	printf("=%d\n",fp(a,b));
	return 0;
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
