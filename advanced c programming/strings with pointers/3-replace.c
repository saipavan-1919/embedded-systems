#include<stdio.h>
void replace(char ,char *);
int main()
{
char str[]="hi hello world";
char c='e';
replace(c,str);
printf("%s",str);
return 0;
}
void replace(char c,char *ptr2)
{
for(int i=0;*(ptr2+i)!='\0';i++)
{
if(*(ptr2+i)==c)
{
*(ptr2+i)='c';
}
}
}
