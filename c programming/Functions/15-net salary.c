#include<stdio.h>
int days(int m, int y)
{
	int d1;
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
				d1=31;
				break;
			}
		case 4:
		case 6:
		case 9:
		case 11:
			{
				d1=30;
				break;
			}
		case 2:
			{
				if((y%400==0)||(y%100!=0&&y%4==0))
					d1=29;
				else
					d1=28;
			}
	}
	return d1;
}
int salary(int total,int lop,int d)
{
	int n;
	n=total-((total/d)*lop);
	return n;
}
int main()
{
	int total,lop,d,m,y,net;
	printf("enter total salary, lop, month and year =");
	scanf("%d%d%d%d",&total,&lop,&m,&y);
	d=days(m,y);
	net=salary(total,lop,d);
	printf("net salary =%d",net);
	return 0;
}
