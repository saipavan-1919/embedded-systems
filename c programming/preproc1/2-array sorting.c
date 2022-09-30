#include<stdio.h>
#define BIG(a,b) if(a>b) printf("a=%d is big num",a);else printf("b=%d is big num",b);
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
	printf("enter arr[%d] =",i);
	scanf("%d",arr[i]);
	if(i==0)
		continue;
	BIG(arr[i],arr[i+1]);
	}
}
