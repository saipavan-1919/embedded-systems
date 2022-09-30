#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,marks;
	float percent;
	printf("enter 6 subject marks a,b,c,d,e,f");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	marks=a+b+c+d+e+f;
	printf("total marks = %d\n",marks);
        percent=((float)marks/600)*100;
	printf("percent=%.2f\n",percent);
	if((percent>=0)&&(percent<=39))
		printf("grade= Fail");
	if((percent>=40)&&(percent<=49))
		printf("Grade = Third division");
	if((percent>=50)&&(percent<=59))
		printf("Grade = second division");
	if((percent>=60)&&(percent<=79))
		printf("Grade = first division");
	if((percent>=80)&&(percent<=100))
		printf("Grade = Honours");
	return 0;
}
