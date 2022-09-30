#include<stdio.h>
#include<stdlib.h>
void * myrealloc(char *,int);
char * strcopy(char *,char *);
int main()
{
	char *ptr1,*ptr2;
	ptr1=(char *)malloc(10*sizeof(char));
	printf("enter data = ");
	scanf("%s",ptr1);
	ptr2=(char *)myrealloc(ptr1,20*sizeof(char));
	printf("after realloc =%s\n",ptr2);
	printf("using old pointer=%s",ptr1);
	free(ptr2);
	return 0;
}

void * myrealloc(char *ptr1,int s)
{
	char *ptr2,*ptr3;
	ptr2=(char *)malloc(s);
	ptr3=strcopy(ptr1,ptr2);
	free(ptr1);

	return ptr3;
}

char * strcopy(char *ptr1,char *ptr2)
{
	char *ptr3=ptr2;
	for(;*ptr1!='\0';)
	{
		*ptr2=*ptr1;
		ptr2++;
		ptr1++;
	}
	return ptr3;
}
