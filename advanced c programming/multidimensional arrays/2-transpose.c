#include<stdio.h>
int main()
{
int arr[3][2]={{1,3},{4,7},{2,5}};
for(int j=0;j<2;j++)
{
	for(int i=0;i<3;i++)
	{
		printf("%d\t",arr[i][j]);
	}
printf("\n");
}
}
