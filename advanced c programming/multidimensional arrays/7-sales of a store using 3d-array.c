#include<stdio.h>

#define T 2
#define R 3
#define C 3


int fun1(int [][R][C]);
int fun2(int [][R][C]);
int fun3(int [][R][C]);
int fun4(int [][R][C]);
int fun5(int [][R][C]);


int main()
{
	int arr[T][R][C],i,j,k,sum=0;
	for(i=0;i<T;i++)
	{
		printf(" %d item \n",i+1);
		for(j=0;j<R;j++)
		{
			printf("%d salesman \n",j+1);
			for(k=0;k<C;k++)
			{
				printf("enter no.of items sold on %d day = ",k+1);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	for(i=0;i<T;i++)
	{
		printf("\n%d item matrix \n",i+1);
		for(j=0;j<R;j++)
		{
			printf("\n");
			for(k=0;k<C;k++)
			{
				printf("%d\t",arr[i][j][k]);
			}
		}
	}
	printf("\n");
	
	//total sales by each sales man per day
	fun1(arr);

	//toal sales of eachitem per day
	fun2(arr);

	//total sales made by each sales man
	fun3(arr);

	//total sales of each item
	fun4(arr);

	//total sales of supermarket
	fun5(arr);
	
	return 0;
}


int fun1(int arr[T][R][C])
{
	int sum=0,i,j,k;
	for(j=0;j<R;j++)
	{
		
		for(k=0;k<C;k++)
		{
			sum=0;
			for(i=0;i<T;i++)
			{
				sum=sum+arr[i][j][k];
			}
			printf("no.of items sold by %d sales man on %d day = %d\n",j+1,k+1,sum);
		}
	}
}

int fun2(int arr[T][R][C])
{
	int sum=0,i,j,k;
	for(i=0;i<T;i++)
	{
		for(k=0;k<C;k++)
		{
			sum=0;
			for(j=0;j<R;j++)
			{
				sum=sum+arr[i][j][k];

			}
			printf("on %d day %d item sold= %d \n",k+1,i+1,sum);
		}
	}
}

int fun3(int arr[T][R][C])
{
	int sum=0,i,j,k;
	for(j=0;j<R;j++)
	{
		sum=0;
		for(i=0;i<T;i++)
		{
			for(k=0;k<C;k++)
			{
				sum=sum+arr[i][j][k];

			}
		}
		printf("total sales made by %d salesman = %d\n",j+1,sum);
	}

}

int fun4(int arr[T][R][C])
{
	int sum=0,i,j,k;
	for(i=0;i<T;i++)
	{
		sum=0;
		for(j=0;j<R;j++)
		{
			for(k=0;k<C;k++)
			{
				sum=sum+arr[i][j][k];
			}
		}
		printf("total sales of %d item = %d\n",i+1,sum);
	}
}

int fun5(int arr[T][R][C])
{
	int sum=0,i,j,k;

	for(i=0;i<T;i++)
	{
		for(j=0;j<R;j++)
		{
			for(k=0;k<C;k++)
			{
				sum=sum+arr[i][j][k];
			}
		}

	}
	printf("total sales of super market = %d\n",sum);
}
