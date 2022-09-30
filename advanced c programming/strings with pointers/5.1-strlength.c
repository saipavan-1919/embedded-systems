#include<stdio.h>
void strlength(char *);
int main()
{

	char str[]="hello world";
	strlength(str);
}
void strlength(char *ptr)
{
	int count=0;
	for(;*ptr!='\0';ptr++)
	{
		count=count+1;
	}
	printf("the length of string = %d",count);
}
