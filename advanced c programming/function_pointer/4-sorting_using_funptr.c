#include<stdio.h>


int strcomp3(char *ptr1,char *ptr2)       //ascending order with case insensitivity
{
	int t=0;
	char temp1,temp2;


	for(;(*ptr1!='\0')||(*ptr2!='\0');)
	{
	if((*ptr1>='A')&&(*ptr1<='Z'))
	{
		temp1=*ptr1+32;
	}
	else
	{
		temp1=*ptr1;
	}
	if((*ptr2>='A')&&(*ptr2<='Z'))
	{
		temp1=*ptr1+32;
	}
	else
	{
		temp2=*ptr2;
	}

		if(temp1>temp2)
		{
			t=1;
			break;
		}
		else if(temp1<temp2)
		{
			t=-1;
			break;
		}
		else if(temp1==temp2)
			t=0;

		ptr1++;
		ptr2++;
	}
/*	if(*ptr2=='\0')
		t=1;
	else if(*ptr1=='\0')
		t=-1;*/
	return t;
}

int strcomp1(char *ptr1,char *ptr2)       //ascending order
{
	int t=0;
	for(;(*ptr1!='\0')||(*ptr2!='\0');)
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
/*	if(*ptr2=='\0')
		t=1;
	else if(*ptr1=='\0')
		t=-1;*/
	return t;
}

int strcomp2(char *ptr1,char *ptr2)        //descending order
{
	int t=0;
	for(;(*ptr1!='\0')||(*ptr2!='\0');)
	{
		if(*ptr1<*ptr2)
		{
			t=1;
			break;
		}
		else if(*ptr1>*ptr2)
		{
			t=-1;
			break;
		}
		else if(*ptr1==*ptr2)
			t=0;

		ptr1++;
		ptr2++;
	}
/*	if(*ptr2=='\0')
		t=1;
	else if(*ptr1=='\0')
		t=-1;*/
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
	*(ptr1)='\0';

	return ptr3;
}

int main(int argc,char * argv[])
{
	char temp[20];
	char * temp1;
	int t;
	int (*fp)(char *,char *);
	for(int i=1;i<argc;i++)
	{
		for(int j=1;j<argc-i;j++)
		{
			if(*(*(argv+1)+1)=='i')
			{
				i=2;
				fp=strcomp3;
			}
			else if(*(*(argv+1)+1)=='r')
			{
				i=2;
				fp=strcomp2;
			}
			else 
				fp=strcomp1;
	t=fp(*(argv+i),*(argv+i+1));
	if(t==1)
	{
		temp1=strcopy(temp,*(argv+i));
		*(argv+i)=strcopy(*(argv+i),*(argv+i+1));
		*(argv+i+1)=strcopy(*(argv+i+1),temp);
		
	}
		}
	}
	for(int i=2;i<argc;i++)
	printf("%s\n",(*(argv+i)));
	return 0;


}

