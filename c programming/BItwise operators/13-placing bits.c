#include<stdio.h>
int functionset(int,int,int,int);
int main()
{
	int  x=0XAA,y=0XA7,z;
	int p=6,n=3;
	z=functionset(n,x,y,p);
	for(int i=7;i>=0;i--)
	{
		if(z&(0X01<<i))
		printf("1");
		else
			printf("0");

	}
	return 0;


}
int  functionset(int n,int x,int y,int p)
{
	p=p-1;
	for(int i=n-1;i>=0;i--)
	{
		if(y&(0X01<<i))
			{
			    x=(x&(~(0X01<<p))|(0X01<<p)); 
			    p=p-1;

			}
		else
		{
		 x=x&(~(0X01<<p));
		 p=p-1;

		}
