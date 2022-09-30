#include<stdio.h>
int main()
{
	int a,b,i=1,c;
	printf("enter a and b values =");
	scanf("%d%d",&a,&b);
	c=a;
	while(i<b)
	{
		a=a*c;
		i=i+1;
	}
	printf(" a power b= %d",a);
	return 0;
}
