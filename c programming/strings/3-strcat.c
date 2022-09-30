#include<stdio.h>
void strcat1(char[],char[]);

int main()
{
	char str1[15]="hello";
	char str2[15]="world";
	strcat1(str1,str2);
	printf("%s",str1);
}
void strcat1(char str1[],char str2[])
{
	int j=0;
	for(int i=0;i<15;i++)
	{
		if(str1[i]=='\0')
		{
			str1[i]=str2[j];
			j=j+1;
			if(str2[j]=='\0')
				break;
		}
	}
}
