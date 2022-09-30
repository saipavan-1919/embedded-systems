#include<stdio.h>
void stringncat(char[],char[],int);
int main()
{
	char str1[30];      
	       //	="abcdefghijk";
	char str2[10];
		//="lmnopqr";
        printf("enter str1=");
	scanf("%19s",&str1);
	printf("enter str2=");
	scanf("%9s",&str2);
	int n;
	printf("enter value from where string needs to be placed=");
	scanf("%d",&n);
	stringncat(str1,str2,n);
	printf("%s",str1);
	return 0;
}
void stringncat(char str1[],char str2[],int n)
{
	int i,j;
	for(i=n-1,j=0;str2[j]!=0;i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
}
