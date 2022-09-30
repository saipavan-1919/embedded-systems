#include<stdio.h>
int main()
{
        float a,area,perimeter;
	printf("enter side of square a=");
	scanf("%f",&a);
	area=a*a;
	printf("area=%f",area);
	perimeter=4*a;
	printf("perimeter=%f\n",perimeter);
	return 0;
}
