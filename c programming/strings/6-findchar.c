#include<stdio.h>
void charindex(char[],char);
int main()
{
	char c;
	char str[20]="hello world";
	printf("enter the required character=");
	scanf(" %c",&c);
	charindex(str,c);
}
void charindex(char str[],char c)
{
	for (int i=0;i<20;i++)
	{
		if(c==str[i])
		{
			printf("the index of required charcter =%d\n",i);
		}

	}
}
