#include<stdio.h>
int main()
{
	int a,b,c;
	char d;
	float e,f,g;
	printf("enter values for a,b,d,e,f");
	scanf("%d%d%c%f%f",&a,&b,&d,&e,&f);
	c=a+b;
	printf("c=%d",c);
	printf("d=%c",d);
	g=e-f;
	printf("g=%f",g);
	return 0;
}
