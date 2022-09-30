/*#include<stdio.h>
int isvaliddate(int,int,int);
int isleapyear(int);
int compare(int,int,int,int,int,int);*/
#include"elderdate.h"
int main()
{
        int n,i,d,m,y,d1=31,m1=12,y1=2021,v,c;
	printf("enter no.of date of births =");
	scanf("%d",&n);
	for(i=1;i<=n; )
	{
		printf("enter date of birth d-m-y=");
		scanf("%d-%d-%d",&d,&m,&y);
		v=isvaliddate(d,m,y);
		if(v==0)
			continue;
		i=i+1;
		c=compare(d,m,y,d1,m1,y1);
		if(c==1)
		{
			d1=d;
			m1=m;
			y1=y;
		}


	}
	printf("the elder date=%d-%d-%d",d1,m1,y1);
	return 0;
}

int isvaliddate(int d,int m,int y)
{
	int a,b;
	if(y>0&&y<2022)
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
					       a=1;
				       else
					       a=0;
				       break;
			       }
		       case 4:
		       case 6:
		       case 9:
		       case 11:
			       {
				       if(d>0&&d<31)
					       a=1;
				       else
					       a=0;
				       break;
			       }
		       case 2:
			       {
				       b=isleapyear(y);
				       if(b==1)
					   {
						   if(d>0&&d<30)
							   a=1;
						   else
							   a=0;

					   }
				       else
				       {
					       if(d>0&&d<29)
						       a=1;
					       else
						       a=0;
				       }
				       break;

			       }
		       default:
			       a=0;
	       }
	}
	       else
		       a=0;
	       return a;
}
                   
int compare(int d,int m,int y,int d1,int m1,int y1)
{
	int d2;
	if(y<y1)
		d2=1;
	else if(y>y1)
		d2=0;
	else if(y==y1)
	{
		if(m<m1)
			d2=1;
		else if(m>m1)
			d2=0;
		else if(m==m1)
		{
			if(d<d1)
				d2=1;
			else if(d<d2)
				d2=0;
			else
				d2=2;

		}
	}
return d2;

}
int isleapyear(int y)
{
	int a;
	if((y%400==0)||(y%100!=0&&y%4==0))
		a=1;
	else
		a=0;
	return a;

}

