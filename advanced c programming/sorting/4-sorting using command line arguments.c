#include<stdio.h>

int strcomp(char *ptr1,char *ptr2)
{
	int t=0;
	for(;(*ptr1!='\0')&&(*ptr2!='\0');)
	{
		if(*ptr1>*ptr2)
		{
			t=1;
			break;
		}
		else if(*ptr1<*ptr2)
		{
			t=-1;
			break;
		}
		else if(*ptr1==*ptr2)
			t=0;

		ptr1++;
		ptr2++;
	}
	if(*ptr2=='\0')
		t=1;
	if(*ptr1=='\0')
		t=-1;
	return t;
}

char * strcopy(char *ptr1,char *ptr2)
{
	int i;
	char *ptr3=ptr1;
	for(;*ptr2!='\0';)
	{
		*ptr1=*ptr2;
		ptr2++;
		ptr1++;

	}
	*ptr1='\0';

	return ptr3;
}

int main(int argc,char * argv[])
{
	char temp[20];
	char * temp1;
	int t;
	for(int i=1;i<argc;i++)
	{
		for(int j=1;j<argc-i;j++)
		{
	t=strcomp(argv[i],(argv[i+1]));
	if(t==1)
	{
		temp1=strcopy(temp,argv[i]);
		argv[i]=strcopy(argv[i],argv[i+1]);
		argv[i+1]=strcopy(argv[i+1],temp);
		
	}
		}
	}
	for(int i=1;i<argc;i++)
	printf("%s\n",argv[i]);
	return 0;


}

