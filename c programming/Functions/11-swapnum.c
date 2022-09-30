#include<stdio.h>
void swap(int a,int b)
{
           int temp;
	   temp=a;
	   a=b;
	   b=temp;
	   printf("a=%db=%d",a,b);
}
int main()
{
	int a,b,c;
	printf(" entrer a and b values=");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
