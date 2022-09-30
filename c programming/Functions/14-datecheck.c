#include<stdio.h>
int datecheck(int d,int m,int y)
{
	int b;
	if(y>0&&y<2021)
	{
		switch(m)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				{
					if(d>0&&d<32)
						b=1;
					else
						b=0;
				}

			case 4:
			case 6:
			case 9:
			case 11:
				{
					if(d>0&&d<31)
						b=1;
					else
						b=0;
				}
			case 2:
				{
					if((y%400==0)||(y%100!=0&&y%4==0))
					{
						if(d>0&&d<30)
							b=1;
						else
							b=0;

					}
					else
					{
						if(d>0&&d<29)
							b=1;
						else
							b=0;
					}
				}
		}
	}
              return b;
}
int main()
{
	int d,m,y,a;
	printf("enter date d1-m1-y1");
	scanf("%d-%d-%d",&d,&m,&y);
	a=datecheck(d,m,y);
	if(a==1)
		printf("date is valid");	
	else
		printf(" date is invalid");
	return 0;

}
