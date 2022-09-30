#include<stdio.h>
int main()
{
	int n,count=0,size;
	printf("enter number");
	scanf("%d",&n);
	size=sizeof(int)*8;
	
	for(int i=0;i<size;i++)
	{
		if(n&(0X01<<i))
			count=count+1;
	}
	if(count==1)
		printf("the given number is a power of 2\n");
	else
		printf("the given number is not a power of 2\n");

}
