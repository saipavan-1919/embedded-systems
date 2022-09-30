#include<stdio.h>
void swaparrays(int[],int[]);
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	swaparrays(arr1,arr2);
	printf("swapped arrays=\n");
	for(int i=0;i<5;i++)
	{
	printf("%d,",arr1[i]);
	}
	printf("\n");
	for(int j=0;j<5;j++)
	{
		printf("%d,",arr2[j]);
	}

}
void swaparrays(int arr1[],int arr2[])
{
	int temp,i,j;
	for(i=0,j=4;i!=5;i++,j--)
	{
		temp=arr1[i];
		arr1[i]=arr2[j];
		arr2[j]=temp;

	}
}
