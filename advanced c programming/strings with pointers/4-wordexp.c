#include<stdio.h>
void wordexpansion(char *);
int main()
{
char str[30];
printf("enter string = ");
scanf("%s",&str);
wordexpansion(str);
return 0;
}
void wordexpansion(char *ptr)
{
for(;*ptr!='\0';ptr++)
{
switch(*ptr)
{
case '0':
printf("zero ");
break;
case '1':
printf("one ");
break;
case '2':
printf("two ");
break;
case '3':
printf("three ");
break;
case '4':
printf("four ");
break;
case '5':
printf("five ");
break;
case '6':
printf("six ");
break;
case '7':
printf("seven ");
break;
case '8':
printf("eight ");
break;
case '9':
printf("nine ");
break;
}
}
}
