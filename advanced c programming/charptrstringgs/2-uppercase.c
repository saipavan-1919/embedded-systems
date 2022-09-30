#include<stdio.h>
char * uppercase(char *);
int main()
{
	char str[]="hello world";
	char *ptr;
	ptr=uppercase(str);
	printf("%s",ptr);
	return 0;

}

char * uppercase(char *ptr)
{
	char *ptr2=ptr;
	for(;*ptr!='\0';ptr++)
	{
		if((*ptr>='a')&&(*ptr<='z'))
		{
			*ptr=*ptr-32;
		}
	}
	return ptr2;
}
