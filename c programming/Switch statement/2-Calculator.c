 
#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter a and b =");
	scanf("%d%d",&a,&b);
	printf("Enter c =");
	scanf(" %c",&c);
	switch(c)
	{
		case '+':
			printf("sum=%d",a+b);
			break;
		case '-':
			printf("sub=%d",a-b);
			break;
		case '*':
			printf("mul=%d",a*b);
			break;
		case '/':
			printf("div=%d",a/b);
			break;
		case '%':
			printf("rem=%d",a%b);
			break;
		default:
			printf("syntax error");
	}
}