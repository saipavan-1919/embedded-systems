#include<stdio.h>
void strlower(char[]);
int main()
{
	char str[]="Hello World";
	strlower(str);
	printf("%s",str);
}
void strlower(char str[])
{
	for(int i=0;1;i++)
	{
		if(str[i]=='\0')
			break;
		else if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
}
