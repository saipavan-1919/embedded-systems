#include<stdio.h>
int main()
{
	int num;
	printf("enter num=");
	scanf("%d",&num);
	num%2==0?printf("num=%d is even",num):printf("num=%d is odd",num);
	return 0;
}
