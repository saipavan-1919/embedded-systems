#include<stdio.h>
int main()
{
	int i=1;
	while(i==1)
	{
		int a,b;
		char c;
		printf("enter a and b values = ");
		scanf("%d%d",&a,&b);
		printf("enter operation = ");
		scanf(" %c",&c);
		switch(c)
		{
			case '+':
				printf("add=%d",a+b);
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
		printf("enter i=");
		scanf("%d",&i);
	}
}
