#include<stdio.h>
void swap(int *p1,int *p2,int *p3)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=temp;
}
int main()
{
	int a,b,c;
	printf("enter values of a,b,c=");
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("swapped values of a,b,c=\n a=%d\nb=%d\nc=%d\n",a,b,c);
	return 0;
}
