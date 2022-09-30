#include<stdio.h>
char * replace(char *);
int main()
{
	char str[]="hello world";
	char *ptr;
	ptr=replace(str);
	printf("%s\n",ptr);
	return 0;
}

char * replace(char *ptr)
{
	char *ptr2;
	ptr2=ptr;
	for(;*ptr!='\0';ptr++)
	{
		if(*ptr=='l')
		{
			*ptr='r';
		}
	}
	return ptr2;

}
