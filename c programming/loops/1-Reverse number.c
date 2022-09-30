#include<stdio.h>
int main()
{
	int num,i=1,a;
	printf("enter number =");
	scanf("%d",&num);
	while(i==1)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
		if(num==0)
			i=0;
	}
}
