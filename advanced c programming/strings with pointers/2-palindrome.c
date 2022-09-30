#include<stdio.h>
int palindrome(char *);
int main()
{
char str[]="hihih";
int c;
c=palindrome(str);
if(c==1)
printf("str is a palindrome");
else
printf("str is not palindrome");
return 0;
}
int palindrome(char *ptr)
{
int l=0,c;
for(int i=0;*(ptr+i)!='\0';i++)
{
l=l+1;
}
for(int i=0,j=l-1;i<j;i++,j--)
{
if(*(ptr+i)==*(ptr+j))
{
c=1;
}
else
{
c=0;
break;
}
}
return c;
}
