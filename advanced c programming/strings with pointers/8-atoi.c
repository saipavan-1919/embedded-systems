#include<stdio.h>
void myatoi(char *ptr)
{
	int s=0;
	for(;*ptr!='\0';ptr++)
	{
		s=(s*10)+((*ptr)-48);

	}
	printf("%d",s);
}
int main()
{
	char str[]="789";
	myatoi(str);
	return 0;
}

