
#include<stdio.h>
char * lowercase(char *);
int main()
{
	char str[]="Hello World";
	char *ptr;
	ptr=lowercase(str);
	printf("%s",ptr);
	return 0;

}

char * lowercase(char *ptr)
{
	char *ptr2=ptr;
	for(;*ptr!='\0';ptr++)
	{
		if((*ptr>='A')&&(*ptr<='Z'))
		{
			*ptr=*ptr+32;
		}
	}
	return ptr2;
}
