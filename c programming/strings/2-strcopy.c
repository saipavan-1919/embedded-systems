#include<stdio.h>
void strcopy(char[],char[]);
int main()
{
	char str1[15]="hello world";
        char str2[15];
	strcopy(str1,str2);
	printf("%s",str2);


}
void strcopy(char str1[],char str2[])
{
	int i,j;
	for(i=0;i<15;i++)
	{
		
		str2[i]=str1[i];
		if(str1[i]=='\0')
			break;
	}
}
