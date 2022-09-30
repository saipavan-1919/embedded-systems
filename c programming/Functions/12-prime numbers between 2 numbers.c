
#include<stdio.h>
void prime(int a,int b)
{
	int i,c;
	a=a+1;
        for( ;a<b;a++)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				c=0;
				break;
			}
			else
				c=1;
		}
		if(c==1)
		printf("%d",a);
	}
}
	int main()
	{
		int a,b;
		printf("enter two numbers a,b=");
		scanf("%d%d",&a,&b);
		printf("prime numbers between a and b are :");
		prime(a,b);
		return 0;
	}
