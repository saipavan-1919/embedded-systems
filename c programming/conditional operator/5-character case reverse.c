 
#include<stdio.h>
int main()
{
	char c,cr;
	int a,b;
	printf("enter character c=");
	scanf("%c",&c);
	printf("%d",c);
	b=c>=96?c-32:c+32;
	printf("cr=%c",b);
	return 0;
}