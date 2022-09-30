#include<stdio.h>
void strupper(char[]);
int main()
{
	char str[]="Hello World";
	strupper(str);
	printf("%s",str);
}
void strupper(char str[])
{
	for(int i=0;1;i++)
	{
		if(str[i]=='\0')
			break;
		else if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
}
