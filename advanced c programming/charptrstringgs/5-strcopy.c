#include<stdio.h>
char * mystrcopy(char *,char *);
int main()
{
	char str1[]="hello world";
	char str2[20];
	char *ptr;
	ptr=mystrcopy(str1,str2);
	printf("%s\n%s\n",ptr,str2);
	return 0;
}
char * mystrcopy(char *str1,char *str2)
{
	char *ptr=str1;
	for(;*str1!='\0';)
	{
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
	return ptr;
}
