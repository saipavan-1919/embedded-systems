#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b,c,d values=");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
				printf(" a is big num");
			else
				printf(" d is big num");
			
		}
		else
		{
			if(c>d)
				printf(" cis big num");
			else
				printf(" d is big num");
		}
	

	}
	else
	{
			if(b>c)
			{
				if(b>d)
					printf(" b is big num");
				else
					printf(" d is big num");
			}
			else
			{
				if(c>d)
				    printf("c is big num");
				else
					printf(" dis big num");

		}
	}
}
