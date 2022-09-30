#include<stdio.h>
int bignum(int[],int);
void nooftime(int[],int,int);
int main()
{
	int big,n,i;
	printf("enter array size value=");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("enter arr[%d] value=",i);
		scanf("%d",&arr[i]);
	}

	big=bignum(arr,n);
	printf("big num=%d\n",big);
	nooftime(arr,big,n);
}
int bignum(int arr[],int n)
{
	int big;
	if(arr[0]>arr[1])
		big=arr[0];
	else
		big=arr[1];
	for (int i=0;i<n;i++)
	{
		if(arr[i]>big)
				big=arr[i];

	}
	return big;
}
void nooftime(int arr[],int big,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(big==arr[i])
			count=count+1;
	}
	printf("the no of times big number repeated is = %d\n",count);
}
