#include<stdio.h>
int main()
{
	int *p1,*p2,*p3,n=1;
	p1=&n,p2=&n,p3=&n;
	printf("adress of n=%u\n",p1);
	printf("indirected value=%d\n",*p1);
	printf("variable valu=%d\n",n);
	printf("adress of n=%u\n",p2);
	printf("indirected value=%d\n",*p2);
	printf("variable valu=%d\n",n);
	printf("adress of n=%u\n",p3);
	printf("indirected value=%d\n",*p3);
	printf("variable valu=%d\n",n);
}
