#include<stdio.h>
#include<stdlib.h>
char * myitoa(int);
char * mystrrev(char *);
int main()
{
	int a=123;
	char *ptr=myitoa(a);
	printf("%s",ptr);

}

char * myitoa(int a)
{
	char *ptr2,*ptr3,*ptr4;
	int l=0;
	ptr2=(char *)malloc(5*sizeof(char));
	ptr3=ptr2;
	for(;(a*10)/10!=0;)
	{
		*ptr2=(a%10)+48;
		ptr2++;
		a=a/10;
		l++;
	}
	*ptr2='\0';
	ptr2=mystrrev(ptr3);
/*	ptr4=ptr2+l;
	for(;ptr2<ptr4;)
	{
		char temp;
		temp=*ptr2;
		*ptr2=*ptr4;
		*ptr4=temp;
		ptr2++;
		ptr4++;
	}*/
	

return ptr2;

}
char * mystrrev(char *ptr1)
{
	int i,l=0;
	char *ptr2=ptr1,*ptr3,*ptr4;
	for(;*ptr1!='\0';)
	{
		l++;
		ptr1++;
	}

//	printf("length=%d",l);
	
	ptr3=ptr2;
	ptr4=ptr2+l-1;

	for(;ptr3<ptr4;ptr3++,ptr4--)
	{
		char temp;
		temp=*ptr3;
		*ptr3=*ptr4;
		*ptr4=temp;

	}
	*(ptr2+l)='\0';

//	printf("\n%s\n",ptr2);
	return ptr2;
}
