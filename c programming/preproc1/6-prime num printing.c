#include<stdio.h>
#define PRIME(i,j,temp) if(i%j==0) {temp=0;break;} else temp=1;
int main()
{
	int a,b,temp,i,j;
	printf("enter the required prime numbers range a,b=");
	scanf("%d%d",&a,&b);
	printf("prime numbers between %d and %d are=",a,b);
	for(i=a+1;i<b;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i==j)
				continue;
		PRIME(i,j,temp);
		}
              	if(temp==1)
		printf("%d \t ",i);

	}
	return 0;

}
