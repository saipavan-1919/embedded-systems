#include<stdio.h>
#define S 10
int * sorting(int []);

int main()
{
	int num[S],*num2;
	printf("enter array of numbers = ");
	for(int i=0;i<S;i++)
	{
		scanf("%d",&num[i]);
	}
	num2=sorting(num);
	for(int i=0;i<S;i++)
	printf("%d ",num2[i]);
	return 0;
}

int * sorting(int *num)
{
	int temp=0,i,j,*num2=num;
	for(i=0;i<S;i++)
	{
		num=num2;
		for(j=0;j<S-i;j++)
		{
			if(*num>*(num+1))
			{

				temp=*num;
				*num=*(num+1);
				*(num+1)=temp;
			}
			num++;

		}
	}
	return num2;
}
