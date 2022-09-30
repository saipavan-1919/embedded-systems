#include<stdio.h>
int main()
	{
		int num,a=2,b=1;
		printf("enter number =");
		scanf("%d",&num);
		while((a>1)&&(a<num))
			{ 
				if(num%a==0)
                                {
				b=0;
				a=0;
				}
			a=a+1;
		}
		if(b==0)
			printf("num is not prime");
		else
			printf("num is prime");
	}
