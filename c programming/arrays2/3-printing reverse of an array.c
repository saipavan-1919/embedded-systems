#include<stdio.h>
void reverse(int[]);
int main()
{
	int arr[5]={1,2,3,4,5};
	reverse(arr);
}
void reverse(int arr[])
{
	int i;
	for(i=4;i>=0;i--)
		printf("%d,",arr[i]);

}
