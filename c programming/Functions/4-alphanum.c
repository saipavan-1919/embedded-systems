#include<stdio.h>
int alphanum(char c)
{
	int a;
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>=17&&c<=26))
		a=1;
	else
		a=0;
	return a;
}
int main()
{
	int b;
	char c;
	printf("enter character=");
	scanf("%c",&c);
	b=alphanum(c);
	if(b==1)
		printf("the character is alpha numeric");
	else 
		printf(" the character is not alpha numeric");
	return 0;


}
