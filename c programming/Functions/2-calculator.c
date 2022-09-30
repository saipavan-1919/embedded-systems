#include<stdio.h>
int addition(int a,int b)
{
	int t1;
	t1=a+b;
	return t1;
}
int substraction(int a,int b)

{
        int t2; 
	t2=a-b;
	return t2;
}
int multiplication(int a,int b)
{
	int t3;
	t3=a*b;
	return t3;
}
int division(int a,int b)
{
	int t4;
	t4=a/b;
	return t4;
}
int modulus(int a,int b)
{
	int t5;
	t5=a%b;
	return t5;
}

int main()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter a and b values=");
	scanf("%d%d",&a,&b);
	char c;
	printf("enter operation =");
	scanf(" %c",&c);
	if(c=='+')
	{
		add=addition(a,b);
		printf(" add =%d\n",add);

	}
     	else if(c=='-')
	{
		sub=substraction(a,b);
		printf(" sub=%d\n",sub);

	}
	else if(c=='*')
	{
		mul=multiplication(a,b);
		printf(" mul=%d\n",mul);

	}
	else if(c=='/')
	{
		div=division(a,b);
		printf(" div=%d\n",div);

	}
	else if(c=='%')
	{
		mod=modulus(a,b);
		printf(" mod=%d\n",mod);

	}
	else 
		printf("syntax error");

}
