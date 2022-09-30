#include<stdio.h>
#include<stdlib.h>

int myatoi(char *);

int main(int argc, char * argv[])
{
	int num1,num2;
//	char * ch=argv[2];
//	char op=*ch;
	char *op=argv[2];
	if(argc!=4)
	{
		printf("not enough arguments\n");
		exit(0);
	}
	num1=myatoi(argv[1]);
	num2=myatoi(argv[3]);
	switch(*op)
	{
		case '+':
			printf("sum=%d\n",num1+num2);
			break;
		case '-':
			printf("sub=%d\n",num1-num2);
			break;
		case '*':
			printf("mul=%d\n",num1*num2);
			break;
		case '/':
			printf("div=%d\n",num1/num2);
			break;
		case '%':
			printf("rem=%d\n",num1%num2);
			break;
	}
	return 0;


}

int myatoi(char *str)
{
	int num=0;
	for(int i=0;*(str+i)!='\0';i++)
	{
		num=(num*10)+((*(str+i))-48);
	}
	return num;
}
