#include<stdio.h>
int elder(int d1,int m1,int y1, int d2,int m2,int y2)
{
       int b;
       if(y1>y2)
	b=1;
       else 
	b=0;
if(y1==y2)
	 {
	    if(m1>m2)
	    b=1;
	    else 
	    b=0;
	 }
if(y1==y2)
{
	if(m1==m2)
	{
		if(d1>d2)
			b=1;
		else
			b=0;
	}
}
return b;
}
int main()
{
	int d1,m1,y1,d2,m2,y2,a;
	printf("enter dates d1-m1-y1 & d2-m2-y2= ");
	scanf("%d-%d-%d%d-%d-%d",&d1,&m1,&y1,&d2,&m2,&y2);
	a=elder(d1,m1,y1,d2,m2,y2);
	if(a==1)
		printf(" date 1 is elder");
	else 
		printf (" date 2 is elder");
	return 0;
}
