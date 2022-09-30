#include<stdio.h>
int days(int year,int month)
{
	int b;
	switch(month)
	{
           case 1:
	   case 3:
	   case 5:
	   case 7:
	   case 8:
	   case 10:
	   case 12:
		   {
			   b=31;
			   break;
		   }
	   case 4:
	   case 6:
	   case 9:
	   case 11:
		   {
			   b=30;
			   break;
		   }
	   case 2:
		   {
			   if((year%400==0)||(year%100!=0)&&(year%4==0))
				   b=29;
			   else
				   b=28;
		   }

	}
	return b;
}
int main()
{
	int year, month,a;
        printf("enter year and month =");
	scanf("%d%d",&year,&month);
	a=days(year,month);
	printf(" no. of days in given year and month = %d",a);
	return 0;
}
