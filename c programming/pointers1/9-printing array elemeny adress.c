#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int *ptr;
	for(int i=0;i<10;i++)
	{
		ptr=&arr[i];
		printf("adress of arr[%d]=%u\n",i,ptr);
		printf("value of arr[%d]=%d\n",i,*ptr);

	}
	return 0;

}
