#include"calci3.h"
int a,b;
int main()
{
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	char c;
	printf("enter operation=");
	scanf(" %c",&c);
	if(c=='+')
	{
	     addition();
	}
	else if(c=='-')
	{
                substraction();
	}
	else if(c=='*')
	{
		multiplication();
	}
	else if(c=='/')
	{
		division();
	}
	else if(c=='%')
	{
		modulus();
	}
	else
		printf("syntax error");

	return 0;

}

