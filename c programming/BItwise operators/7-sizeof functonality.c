#include<stdio.h>
int main()
{
	char c,a;
	c=0X01;
	int i=1;
	while(1)
	{
		c=c<<1;
		if(c)
			i=i+1;
		else
			break;
	}
	printf("no of bytes=%d",i/8);
}
