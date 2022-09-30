#include<stdio.h>
int mystrcmp(char *ptr1,char *ptr2)
{
	int t;
	for(;(*ptr1!='\0')&&(*ptr2!='\0');)
	{
		if((*ptr1)>(*ptr2))
		{
			t=1;
			break;
		}
		else if((*ptr1)<(*ptr2))
		{
			t=-1;
			break;
		}
		else if((*ptr1)==(*ptr2))
		{
			t=0;

		}

	}
	return t;
}

int main()
{
	char str1[]="hello";
	char str2[]="world";
	int t=mystrcmp(str1,str2);
	if(t==0)
		printf("both strings are equal");
	else if(t==-1)
		printf("str1 is comes first");
	else if(t==1)
		printf("str2 comes first");
	return 0;
}
