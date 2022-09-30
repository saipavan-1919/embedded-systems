#include<stdio.h>
int main()
{
	int num;
	printf("enter number=");
	scanf("%d",&num);
	switch(num%2)
	{
		case 0:
			printf(" the given num is a even number");
			break;

		case 1:
			printf("the given number is odd number");
			break;
		default:
			printf("error");
	}
}
