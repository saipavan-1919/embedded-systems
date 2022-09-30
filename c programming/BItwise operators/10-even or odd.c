#include<stdio.h>
int main()
{
	int n;
	printf("enter number= ");
	scanf("%d",&n);
	if(n&(0X01))
		printf("given number is odd \n");
	else
		printf("given number is even\n");
	return 0;
}
