#include<stdio.h>
int main()
{
	int year;
	printf(" enter the year = ");
	scanf("%d",&year);
	if((year%400==0)||(year%100!=0)&&(year%4==0))
			printf(" given %d is a leap year",year);
			else
			printf(" given %d is not a leap year",year);
			return 0;
			}
		
