#include<stdio.h>
int main()
{
	int n;
	printf("enter the integer");
	scanf("%X",&n);

	if(n&(0X01<<19))
	printf("the 20th pin is active");
	else
		printf("the 20th pin is not active");
	return 0;
}
