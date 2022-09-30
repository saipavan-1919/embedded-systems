
#include"calci.h"
int a,b,s;
int main()
{
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	char c;
	printf("enter operation=");
	scanf(" %c",&c);
	if(c=='+')
	{
		s=addition();
		printf("sum=%d",s);
	}
	else if(c=='-')
	{
                s=substraction();
		printf("sub=%d",s);

	}
	else if(c=='*')
	{
		s=multiplication();
		printf("mul=%d",s);

	}
	else if(c=='/')
	{
		s=division();
		printf("div=%d",s);

	}
	else if(c=='%')
	{
		s=modulus();
		printf("mod=%d",s);
	}
	else
		printf("syntax error");

	return 0;

}

