#include<stdio.h>
int main()
{
	char x=5;
	for(int i=7;i>=0;i--)
	{
		if(x&(0X01<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
