#include<stdio.h>
int leap(int year)
{
	int b;
	if((year%400==0)||(year%100!=0)&&(year%4==0))
		b=1;
	else
		b=0;
	return b;
}
int main()
{
	int year,a;
	printf("enter the year=");
	scanf("%d",&year);
	a=leap(year);
	if(a==1)
		printf("year is leap year");
	else 
		printf("year is not a leap year");
	return 0;
}
