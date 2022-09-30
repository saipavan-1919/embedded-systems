#include"calci.h"
int a,b;
int main()
{
	int sum,sub,mul,div,mod;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	char c;
	printf("enter operation=");
	scanf(" %c",&c);
	if(c=='+')
	{
		sum=addition();
		printf("sum=%d",sum);
	}
	else if(c=='-')
	{
                sub=substraction();
		printf("sub=%d",sub);

	}
	else if(c=='*')
	{
		mul=multiplication();
		printf("mul=%d",mul);

	}
	else if(c=='/')
	{
		div=division();
		printf("div=%d",div);

	}
	else if(c=='%')
	{
		mod=modulus();
		printf("mod=%d",mod);
	}
	else
		printf("syntax error");

	return 0;

}

