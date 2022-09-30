#include<stdio.h>
int main()
{
        float a,b,area,perimeter;
	printf("enter length and breadth of rectangle=");
	scanf("%f%f",&a,&b);
	area=a*b;
	printf("area=%f",area);
	perimeter=2*(a+b);
	printf("perimeter=%f\n",perimeter);
	return 0;
}
