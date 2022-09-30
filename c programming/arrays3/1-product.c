#include<stdio.h>
int product(int[],int);
int main()
{
	int p;
	int arr[5]={1,2,3,4,5};
	int prod[5];
	for(int i=0;i<5;i++)
	{
       p=product(arr,i);
       prod[i]=p;
       printf("%d\n",prod[i]);

	}

}
int product(int arr[],int j)
{
	int p=1;
	for(int i=0;i<5;i++)
	{
		if(j==i)
		{
			continue;
		}
		p=p*arr[i];

	}
	return p;

}
