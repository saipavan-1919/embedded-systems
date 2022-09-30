#include<stdio.h>
int main()
{
	int date1,date2,month1,month2,year1,year2,dob1,dob2;
	printf("enter dob1 date1-month1-year1 = ");
	scanf("%d-%d-%d",&date1,&month1,&year1);
	printf("enter dob2 date2-month2-year2 = ");
	scanf("%d-%d-%d",&date2,&month2,&year2);
	if((year1>0)&&(year1<2021)&&(year2>0)&&(year2<2021))
	{
		switch(month1)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				{
					if((date1>0)&&(date1<32))
					{
						printf(" dob 1 is valid ");
					dob1=1;
					}
					else
					{
						printf(" dob 1 is invalid");
						dob1=0;
					}
					break;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				{
					if((date1>0)&&(date1<31))
					{
						printf("dob1 is valid");
						dob1=1;
					}
					else
					{
						printf(" dob 1 is invalid");
						dob1=0;
					}
					break;

				}
			case 2:
				{
					if((year1%400==0)||((year1%100!=0)&&(year1%4==0)))
					{
						if((date1>0)&&(date1<30))
						{
							printf("dob 1 is valid");
							dob1=1;
						}
						else
						{
						printf(" dob 1 is invalid");
							dob1=0;
						}
					}
					else
					{
						if((date1>0)&&(date1<29))
						{
							printf("dob 1 is valid");
							dob1=1;
						}
						else
						{
						printf(" dob 1 is invalid");
							dob1=0;
						}

					}
					break;
				}
			default:
				{
					printf("dob1 is invalid");
					dob1=0;
				}
		}

		switch(month2)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				{
					if((date2>0)&&(date2<32))
					{
						printf(" dob 2 is valid ");
					dob2=1;
					}
					else
					{

						printf(" dob 2 is invalid");
						dob2=0;
					}
					break;
				}
			case 4:
			case 6:
			case 9:
			case 11:
				{
					if((date2>0)&&(date2<31))
					{
						printf("dob2 is valid");
						dob2=1;
					}
					else
					{
						printf(" dob 2 is invalid");
						dob2=0;
					}
					break;

				}
			case 2:
				{
					if((year2%400==0)||((year2%100!=0)&&(year2%4==0)))
					{
						if((date2>0)&&(date2<30))
						{
							printf("dob 2 is valid");
							dob2=1;
						}
						else
						{
						printf(" dob 2 is invalid");
							dob2=0;
						}
					}
					else
					{
						if((date2>0)&&(date2<29))
						{
							printf("dob 2 is valid");
							dob2=1;
						}
						else
						{
						printf(" dob 2 is invalid");
							dob2=0;
						}

					}
				}
			default:
				{
					printf("dob2 is invalid");
					dob2=0;
				}
		}


	          }
	else
		printf("dates are invalid");

	if((dob1==1)&&(dob2==1))
	{
          if(year1>year2)
	  {
		  printf("dob1 is elde\nr");
	  }
	  else
	  {
		  printf("dob2 is elder\n");
	  }
	  if(year1==year2)
	  {
		  if(month1>month2)
		  {
			  printf("dob1 is elder\n");
		  }
		  else
		  {
			  printf("dob2 is elder\n");
		  }
		  if(month1==month2)
		  {
			  if(date1>date2)
			  {
				  printf("dob1 is elder\n");

			  }
			  else
			  {
				  printf("dob2 is elder\n");
			  }
		  }
	  }

	}
	}
