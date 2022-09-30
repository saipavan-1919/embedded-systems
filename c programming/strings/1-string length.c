#include<stdio.h>
void strlength(char[]);
int main()
{

	char str[]="hello world";
	strlength(str);
}
void strlength(char str[])
{
	int i,count=0;
	for(i=0;1;i++)
	{
		if(str[i]=='\0')
		{
			break;
		}
		count=count+1;
	}
	printf("the length of string = %d",count);
}
