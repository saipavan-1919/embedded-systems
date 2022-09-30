#include<stdio.h>
void strreverse(char[],int);
int strlength(char[]);
int main()
{
        int l;
	char str[]="abcdefg";
	l=strlength(str);
	printf("length of str=%d\n",l);
	strreverse(str,l);
	printf("string=%s\n",str);
}
void strreverse(char str[],int l)
{
	for(int i=0,j=l-1;i<j;i++,j--)
	{
	     char t;
	     t=str[i];
	     str[i]=str[j];
	     str[j]=t;

	}
}
int strlength(char str[])
{
	int count=0;
	for(int i=0;1;i++)
	{
		if(str[i]=='\0')
		{
			break;
		}
		count=count+1;
	}
	return count;
}
