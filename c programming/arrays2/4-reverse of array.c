#include<stdio.h>
void reverse(int[]);
int main()
{
	int n;
	int arr[]={1,2,3,4,5};
	reverse(arr);
	for(n=0;n<5;n++)
	printf("arr[%d]=%d\n",n,arr[n]);
		
}
void reverse(int arr[])
{
	int i,j,temp;
	for(i=0,j=4;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
}
