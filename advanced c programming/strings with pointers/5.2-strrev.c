#include<stdio.h>
char * mystrrev(char *);
int main()
{
	char str[100];
	printf("enter string = ");
	scanf("%[^\n]s",str);
	char *ptr;
	ptr=mystrrev(str);
	printf("%s\n",ptr);
	return 0;
}

char *  mystrrev(char *str)
{
	int l=0;
	char *str1=str,*str2;
	for(;*str!='\0';)
	{
		l=l+1;
		str++;

	}
	str=str1;
	str2=str1+l-1;
	for(;str1<str2;str1++,str2--)
	{
		char temp;
		temp=*str1;
		*(str1)=*(str2);
		*(str2)=temp;
	}

	return str;
}

