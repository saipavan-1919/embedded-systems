#include<stdio.h>
int main()
{
	int a=0X12345678,s=0,b,c,d,e;
	b=a<<24;
	c=(a<<8)&(0X00FF0000);
	d=(a>>8)&(0X0000FF00);
	e=(a>>24);
	s=b|c|d|e;
	printf("%X",s);
	return 0;
}
