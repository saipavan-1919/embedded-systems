#include<stdio.h>
int strcomparen(char[],char[],int);
int main()
{
	char s1[]="hello";
	char s2[]="world";
	int n;
	printf("enter no.of numbers to be compared=");
	scanf("%d",&n);
	int temp;
	temp=strcomparen(s1,s2,n);
	printf("temp=%d\n",temp);
	if(temp==1)
	{
		printf("s1[] comes first\n");
	}
	else if(temp==-1)
	{
                printf("s2[] comes first\n");
	}
	else if(temp==0)
	{
		printf("both are equal\n");
	}
	else
	{
		printf("they cannot be compared. may be one string is empty\n");
	}
}
int strcomparen(char s1[],char s2[],int n)
{
	int i,temp;
	for(i=0;i<n;i++)
	{
		if(s1[i]!='\0'&&s2[i]!='\0')
		{
		if(s1[i]<s2[i])
		{
                    temp=1;
		    break;
		}
		else if(s1[i]>s2[i])
		{
			temp=-1;
			break;
		}
		else if(s1[i]==s2[i])
		{
			temp=0;
		}
		}

	}
return temp;
}
