#include<stdio.h>
int main()
{
	int a=3,b=4,c=5;
	int *ptr;
	ptr=&a;
	printf("the adress of variable a=%u",ptr);
	printf("the indirected value of a=%d\n",*ptr);
	ptr=&b;
	printf("the adress of variable b=%u",ptr);
	printf("the indirected value of b=%d\n",*ptr);
	ptr=&c;
	printf("the adress of variable c=%u",ptr);
	printf("the indirected value of c=%d\n",*ptr);
}
