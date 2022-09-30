#include<stdio.h>
int main()
{
	char c;
	printf("enter character=");
	scanf("%c",&c);
	if(c>='a')
	{
		if(c<='z')
		{
		  printf("the character is a alphabet\n");
		}
		else
		{
			printf("the character is not a alphabet");
		}
	}
	else if(c>='A')
	{
               if(c<='Z')
		       printf("the character is a alphabet");
	       else 
		       printf("the character is not a alphabet");
	}
	else
		printf("the character is not a alphabet");
}
