#include<stdio.h>
int strstr1(char[],char[]);
int main()
{
	char s1[]="hello world";
	char s2[]="ll";
	int t;
	t=strstr1(s1,s2);
	if(t==1)
		printf("s2 is substring of s1\n");
	else if(t=0)
	        printf("s2 is not a substring of s1\n");
	return 0;

}
int strstr1(char s1[],char s2[])
{
	int i=0,j=0,t;
	for(i=0;s1[i]!=0;i++)
	{
             if(s1[i]==s2[j])
	     {
		     for(j=0;s2[j]!=0;j++)
		     {
			     if(s1[i]==s2[j])
				     t=1;
			     else if(s1[i]!=s2[j])
				 {
				     t=0;
				     break;
				 }


		     }
	     }
	}
	return t;
}
