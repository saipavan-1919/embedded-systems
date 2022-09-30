#include<stdio.h>
void mystrcat(char *ptr1,char *ptr2,int l)
{
	ptr1=ptr1+l;
	for(;*ptr2!='\0';)
	{
		*ptr1=*ptr2;
		ptr1++;
		ptr2++;
	}

}
int strlength(char *ptr1)
{
	int l=0;
	for(int i=0;*(ptr1+i)!='\0';i++)
	{
		l++;

	}
	return l;
}
int main()
{
	char str1[]="hello";
	char str2[]="worldhi";
	int l;
	l=strlength(str1);
//	strlenght(str2);
	mystrcat(str1,str2,l);
	printf("str=%s",str1);
}
