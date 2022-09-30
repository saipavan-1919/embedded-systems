 
#include<stdio.h>
int main()
{
	int date,month,year;
	printf("enter date-month-year= ");
	scanf("%d%d%d",&date,&month,&year);
	if((year>=1850)&&(year<=2050))
	{
		switch(month)
		{

			default:
			printf("date is invalid");
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
			{
					if((date>=1)&&(date<=31))
							printf("date is valid");
					else
						printf("date is invalid");

							break;
			}
			case 4:
			case 6:
			case 9:
			case 11:
			{
			if((date>=1)&&(date<=30))
					printf("date is valid");
					else
						printf("date is invalid");
					break;
			}
			case 2:
			
			if((year%400==0)||(year%100!=0)&&(year%4==0))
			{
			  if((date>=1)&&(date<30))
					  
							printf("date is valid");
					else
						printf("date is invalid");
			  break;
			}
			else
			{				
			                                 if((date>=1)&&(date<=28))
					  
							printf("date is  valid");
					else
						printf("date is invalid");
							break;
			}
			
		}
	}
	else
		printf("date is invalid");
}