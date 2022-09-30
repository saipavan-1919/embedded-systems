#include<stdio.h>
int main()
{
	int a,b,temp=0,s;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	s=sizeof(int)*8;
	for(int i=0;i<s;i++)
	{
		temp=temp|(a&(0X01<<i));
	}
	a=0;
	for(int i=0;i<s;i++)
	{
		a=a|(b&(0X01<<i));
	}
	b=0;
	for(int i=0;i<s;i++)
	{
		b=b|(temp&(0X01<<i));
	}
	printf("a=%d,b=%d\n",a,b);


}
