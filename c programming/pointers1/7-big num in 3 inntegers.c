#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b,c values=");
	scanf("%d%d%d",&a,&b,&c);
	int *p1,*p2,*p3;
	p1=&a,p2=&b,p3=&c;
	if(*p1>*p2)
	{
		if(*p1>*p3)
		{
			printf("a is big number\n");
		}
		else
		{
			printf("c is big number\n");
		}

	}
	else
	{
		if(*p2>*p3)
			printf("b is big number\n");
		else
			printf(" c is big number\n");
	}
	return 0;

}

