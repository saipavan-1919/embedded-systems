#include<stdio.h>
#define YEAR if(y%400==0||(y%100!=0&&y%4==0)) printf("year is leap");else printf("year is not leap");
int main()
{
	int y;
	printf("enter the year=");
	scanf("%d",&y);
	YEAR;
	return 0;
}
