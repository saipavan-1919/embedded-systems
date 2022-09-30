#include<stdio.h>
#define R 5
int strcomp(char *,char *);
int main()
{
	char * str[R]={"xhello","world","abcd","acb","abb"};
/*	for(int i=0;i<2;i++)
	{
		printf("%s",str[i]);
	}*/
	int t,i=0,j;
	for(j=0;j<R-1;j++)
	{
	for(i=0;i<R-1-j;i++)
	{
	t=strcomp(str[i],str[i+1]);
	if(t==1)
	{
		char * temp;
		temp=str[i];
		str[i]=str[i+1];
		str[i+1]=temp;

	}
	}
	}
	for(i=0;i<R;i++)
	{
		printf("%s\n",str[i]);
	}
}

int strcomp(char *str1,char *str2)
{
	int i,t;
	for(i=0;(*(str1+i)!='\0')&&(*(str2+i)!='\0');i++)
	{
		if((*(str1+i))>(*(str2+i)))
		{
			t=1;
			break;
		}
		else if((*(str1+i))<(*(str2+i)))
		{
			t=-1;
			break;
		}
		else if((*(str1+i))==(*(str2+i)))
		{
			t=0;
		}
	}
	return t;
}
