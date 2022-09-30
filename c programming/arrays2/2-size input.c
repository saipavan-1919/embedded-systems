#include<stdio.h>
int main()
{
	int size;
	printf("enter size of array=");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		printf("enter arr[%d] value=",i);
		scanf("%d",&arr[i]);
	}
	printf("\narray=");
	for(int i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}

}
