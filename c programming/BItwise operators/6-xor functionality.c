#include<stdio.h>
int main()
{
	int a,b,s,x=0,i;
	printf("enter a and b value =");
	scanf("%d%d",&a,&b);
	s=sizeof(int)*8;
	for(i=0;i<s;i++)
	{
	if((a&(0X01<<i))&(b&(0X01<<i)))
		x=x|0;
	else
	{
		if((a&(0X01<<i))|(b&(0X01<<i)))         // 0|1=1  1|0=0
			x=x|(0X01<<i);                  // x=1
		else
			x=x|0;
	}
	}
	printf("xor=%X",x);
}
