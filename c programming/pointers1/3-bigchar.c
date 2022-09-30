#include<stdio.h>
int main()
{
	char c1,c2;
	printf("enter two characters=");
	scanf(" %c %c",&c1,&c2);
	char *p1,*p2;
	p1=&c1;
	p2=&c2;
	if(*p1>*p2)
	{
		printf("c1 has big asci value");
			
	}
	else 
	{
		printf("c2 has big ascii value");
	}
         return 0;

}
