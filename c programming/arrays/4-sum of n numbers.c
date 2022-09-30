#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter array size value=");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		printf("enter num[%d] value= ",i);
		scanf("%d",&num[i]);
		sum=sum+num[i];


	}
	printf("total sum of array=%d",sum);
	return 0;

}
