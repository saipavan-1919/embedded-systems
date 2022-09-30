#include<stdio.h>
int main()
{
	int a,b,c,temp,*p1,*p2,*p3,*p4;
	printf("enter a,b,c values=");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a,p2=&b,p3=&c,p4=&temp;
	*p4=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=*p4;
	printf("swapped values\na=%d\nb=%d\nc=%d\n",*p1,*p2,*p3);
	return 0;


}
