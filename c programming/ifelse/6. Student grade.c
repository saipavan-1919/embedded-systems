#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	float percent;
	printf("enter 6 subject marks a,b,c,d,e,f =");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	percent=((a+b+c+d+e+f)/600.0)*100.0;
        printf("percentage=%.2f",percent);
	if(percent>100)
		printf("re enter marks");
	else if(percent>79)
		printf("grade= Honours");
	else if(percent>59)
		printf("grade= first division");
	else if(percent>49)
		printf("grade= second division");
	else if(percent>39)
		printf("grade= Third division");
	else if(percent<40)
		printf("grade= Fail");
	else 
		printf("re enter the marks");

}
