#include<stdio.h>
void strcopy(char *,char *);
int main()
{
	char str1[15]="hello world";
        char str2[15];
	strcopy(str1,str2);
	printf("%s",str2);


}
void strcopy(char *ptr1,char *ptr2)
{
	int i,j;
	for(;(*ptr1!='\0')||(*ptr2!='\0');ptr1++,ptr2++)
	{
		
		*ptr2=*ptr1;
	}
}
