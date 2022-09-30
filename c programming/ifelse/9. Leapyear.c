#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%400==0)
		printf("The %d is a leap year",year);
	else if(year%100==0)
		printf("the %d is not a leap year",year);
	else if(year%4==0)
		printf("The %d is a leap year",year);
	else 
		printf("the %d is not a leap year",year);
	
}
