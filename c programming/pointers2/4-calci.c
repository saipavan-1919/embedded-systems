#include<stdio.h>
int add1(int *p1,int *p2)
{
	int t;
	t=*p1+*p2;
	return t;
}
int sub1(int *p1,int *p2)
{
	int t;
	t=*p1-*p2;
	return t;
}
int mul1(int *p1,int *p2)
{
	int t;
	t=(*p1)*(*p2);
	return t;
}
int div1(int *p1,int *p2)
{
	int t,a,b;
	a=*p1;
	b=*p2;
	t=a/b;
	return t;
}
int rem1(int *p1,int *p2)
{
	int t,a,b;
	a=*p1;
	b=*p2;
	t=a%b;
	return t;
}

int main()
{
	int a,b,sum,sub,mul,div,rem,*p1,*p2;
	printf("enter values of a and b=");
	scanf("%d%d",&a,&b);
	p1=&a,p2=&b;
	sum=add1(p1,p2);
	sub=sub1(p1,p2);
	mul=mul1(p1,p2);
	div=div1(p1,p2);
	rem=rem1(p1,p2);
	printf("sum=%d\nsub=%d\nmul=%d\ndiv=%d\nrem=%d\n",sum,sub,mul,div,rem);
	
}
