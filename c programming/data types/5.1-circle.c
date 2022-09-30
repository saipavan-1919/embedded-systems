#include<stdio.h>
int main()
{
        float r,area,perimeter;
	printf("enter radius of circle=");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("area=%f",area);
	perimeter=2*3.14*r;
	printf("perimeter=%f\n",perimeter);
	return 0;
}
