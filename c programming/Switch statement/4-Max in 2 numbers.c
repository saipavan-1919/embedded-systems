#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values = ");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("a is maximum");
			break;
		case 0:
			printf(" b is maximum");
			break;
	}
}
