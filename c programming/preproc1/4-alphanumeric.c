#include<stdio.h>
#define AN if((c>='0'&&c<='9')||(c>='A'&&c<='Z')||(c>='a'&&c<='z')) printf("charcter is alphanumeric"); else printf("character is not alphanumeric");
int main()
{
	char c;
	printf("enter character=");
	scanf(" %c",&c);
	AN;
}
