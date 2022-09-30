#include<stdio.h>
int main()
{
	char c;
	printf("enter the character= ");
	scanf("%c",&c);
	if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
		printf("Given character is a alphabet");
	else
		printf("Given character is not a alphabet");
}
