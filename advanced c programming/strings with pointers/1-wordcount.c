#include<stdio.h>
int wordcount(char *);
int main()
{
int wc;
char str[]="hi hello world. do!you know what is this,hi";
wc=wordcount(str);
printf("no of words=%d",wc+1);
return 0;
}

int wordcount(char *ptr)
{
int wc=0;
for(int i=0;*(ptr+i)!='\0';i++)
{
if((*(ptr+i)==' ')||(*(ptr+i)=='.')||(*(ptr+i)==',')||((*ptr+i)=='!'))
{
wc=wc+1;
}
}
return wc;
}

