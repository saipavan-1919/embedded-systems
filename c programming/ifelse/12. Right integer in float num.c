#include<stdio.h>
int main()
{
	float a;
	printf("enter a floating number=");
	scanf("%f",&a);
	printf("the right most digit=%d",((int)a)%10);
}
