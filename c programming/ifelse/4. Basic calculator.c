#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("enter a and  values=");
	scanf("%d%d",&a,&b);
	printf(" enter operation");
	scanf(" %c",&c);
	if(c=='+')
		printf("add=%d",a+b);
	else if(c=='-')
		printf("sub=%d",a-b);
	else if(c=='*')
		printf("mul=%d",a*b);
	else if(c=='/')
		printf("div=%d",a/b);
	else if(c=='%')
		printf("rem=%d",a%b);
	else
		printf("syntax error");
}

