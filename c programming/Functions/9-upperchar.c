#include<stdio.h>
char upper(char c)
{
   char c2;
   if(c>='a'&&c<='z')
	   c2=c-32;
   else 
	   c2=c;
   return c2;
}
int main()
{
	char c,c1;
	printf("enter character =");
	scanf(" %c",&c);
        c1=upper(c);
	printf("%c",c1);
	return 0;
}
