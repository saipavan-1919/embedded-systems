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
         int j=0;
         while(str[j]!=0)
{
    j++;
}
	for (int i=j;i>=0;i--)
	{
		if(c==str[i])
		{
			printf("the index of required charcter =%d\n",i);
			break;
		}

	}
}
