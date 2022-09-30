#include<stdio.h>
char *  mystrcat(char *,char *);
int main()
{
	char str1[]="hello";
	char str2[]=" world";
	char *ptr;
	printf("%s\n",mystrcat(str1,str2));
	return 0;

}

char *  mystrcat(char *str1,char *str2)
{
	char *ptr=str1;
	for(;*str1!='\0';str1++)
	{
		;
	}
//	str1--;
	for(;*str2!='\0';str2++)
	{
		*str1=*str2;
		str1++;
	}
	str2--;
	*str2='\0';
	
	return ptr;
}
