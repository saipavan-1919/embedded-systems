#include<stdio.h>
int main()
{
	float num1,num2,num3,num4,avg;
        printf("enter num1,num2,num3 & num4");
	scanf("%f %f %f %f",&num1,&num2,&num3,&num4);
	avg=(num1+num2+num3+num4)/4;
	printf("average of 4 numbers avg=%f",avg);
	return 0;
}
