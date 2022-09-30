#include<stdio.h>
#define ARR(a,b,c,d,e) printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
int main()
{
	int arr[]={1,2,3,4,5};
	printf("elements in array=\n");
	ARR(arr[0],arr[1],arr[2],arr[3],arr[4]);
}
