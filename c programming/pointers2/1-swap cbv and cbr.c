#include<stdio.h>
void swap1(int, int);
void swap2(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("a=%d\nb=%d\n",*p1,*p2);
	
}

int main()
{
	int a,b,*p1,*p2;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	p1=&a,p2=&b;
	printf("swapping of values using call by value\n");
	swap1(a,b);
	printf("swapping of values using call by reference\n");
	swap2(&a,&b);

}
void swap1(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\nb=%d\n",a,b);
}
