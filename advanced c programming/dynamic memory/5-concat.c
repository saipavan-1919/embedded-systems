#include<stdio.h>
#include<stdlib.h>
char * concat(char *,char *,int,int);
int main()
{
	char *ptr1,*ptr2,*ptr3;
	ptr1=(char *)malloc(10*sizeof(char));
	ptr2=(char *)malloc(10*sizeof(char));
	printf("enter string 1 = ");
	scanf("%s",ptr1);
	printf("enter string 2 = ");
	scanf("%s",ptr2);
//	printf("str1=%s\n",ptr1);
//	printf("str2=%s\n",ptr2);
	ptr3=concat(ptr1,ptr2,3,3);
	printf("concat string = %s",ptr3);
	free(ptr1);
	free(ptr2);
	free(ptr3);


	return 0;
}

char * concat(char *ptr1,char *ptr2,int n1,int n2)
{
	int i;
	char *ptr3,*ptr4;
	ptr3=(char *)malloc((n1+n2+1)*sizeof(char));
	ptr4=ptr3;
	for(i=0;i<n1;i++)
	{
		*ptr3=*ptr1;
		ptr3++;
		ptr1++;
	}
	for(i=0;i<n2;i++)
	{
		*ptr3=*ptr2;
		ptr3++;
		ptr2++;
	}
	*ptr3='\0';
 return ptr4;
}
