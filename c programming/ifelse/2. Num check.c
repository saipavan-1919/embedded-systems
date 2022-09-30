#include<stdio.h>
int main()
{
	int num;
	printf("enter number =");
	scanf("%d",&num);
        if(num>0)
		printf("num is positive");
	else if(num<0)
		printf("num is negative");
	else if(num==0)
		printf("num is zero");
	else
		printf("error");

}

