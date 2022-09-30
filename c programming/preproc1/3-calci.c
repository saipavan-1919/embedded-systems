#include<stdio.h>
#define ADD(a,b) printf("sum =%d",a+b);
#define SUB(a,b) printf("sub =%d",a-b);
#define MUL(a,b) printf("mul =%d",a*b);
#define DIV(a,b) printf("div =%d",a/b);
#define REM(a,b) printf("rem =%d",a%b);
int main()
{
	int a,b;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	ADD(a,b);
	SUB(a,b);
	MUL(a,b);
	DIV(a,b);
	REM(a,b);
	return 0;
}