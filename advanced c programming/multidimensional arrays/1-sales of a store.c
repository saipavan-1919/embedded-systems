#include<stdio.h>
void salesman(int arr[3][3])
{

	for(int i=0;i<3;i++)
	{
	int sum=0;
		for(int j=0;j<3;j++)
		{
			sum=sum+arr[i][j];

		}
	printf("total sales by %d sales man=%d\n",i,sum);
	}
}
int itemsales(int arr[3][3])
{
	
	for(int j=0;j<3;j++)
	{
	int sum=0;
		for(int i=0;i<3;i++)
		{
			sum=sum+arr[i][j];

		}
		printf("%d column items sold = %d\n",j,sum);
	}
}

void totalsales(int arr[3][3])
{
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("total sales = %d\n",sum);
}

int main()
{
int arr[3][3];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("enter value for arr[%d][%d] = ",i,j);
scanf("%d",&arr[i][j]);
}
}
salesman(arr);
itemsales(arr);
totalsales(arr);

}
