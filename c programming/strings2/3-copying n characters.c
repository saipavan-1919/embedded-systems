#include<stdio.h>
void strncopy(char[],char[], int);
int main()
{
	char str1[]="abcdefghijklmn";
	char str2[]="sai pavan";
//	printf("enter string values=");
//	scanf("%9s",&s[10]);
	int n;
	printf("\nenter how many characters need to be copied=");
	scanf("%d",&n);
	strncopy(str1,str2,n);
	printf("string=");
	printf("%s",str1);
	return 0;
}
void strncopy(char str1[],char str2[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		str1[i]=str2[i];
		if(str2[i]=='\0')
			break;
	}
//	str1[i+1]='\0';
			
}
