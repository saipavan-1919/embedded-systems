#include<stdio.h>
void alphanumeric(char *);
int main()
{
char str[]="hi hello world 123";

alphanumeric(str);

}

void alphanumeric(char *ptr)
{
int temp1=0,temp2=0;
for(int i=0;*(ptr+i)='\0';i++)
{
if(((*(ptr+i)>='a')&&(*(ptr+i)<='z'))||((*(ptr+i)>='A')&&(*(ptr+i)<='Z')))
{
temp1=1;
}
else
{
temp1=0;
break;
}
}
for(int i=0;*(ptr+i)='\0';i++)
{
if(((*(ptr+i)>='a')&&(*(ptr+i)<='z'))||((*(ptr+i)>='A')&&(*(ptr+i)<='Z')))
{
temp2=1;
}
else
{
temp2=0;
break;
}

}
if(temp1==1)
printf("str is aphabetic");
else if(temp2==1)
printf("str is numeric");
else
printf("str is alphanumeric");
}
