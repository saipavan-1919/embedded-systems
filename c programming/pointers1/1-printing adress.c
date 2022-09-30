#include<stdio.h>
int main()
{
	int n=4,*ptr;
	ptr=&n;
	printf("adress of variable n=%u\n",ptr);
	printf("indirected value=%u\n",*ptr);
	printf("size of pointer=%u\n",sizeof(ptr));
	return 0;
}
