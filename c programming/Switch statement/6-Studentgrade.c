#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,total,percent,range;
	printf("enter the marks in 6 suvjects a,b,c,d,e,f= ");
	scanf("%d%d%d%d%d%d",&a,&b,&d,&e,&f,&c);
	total=a+b+c+d+e+f;
	printf("total marks=%d",total);
	percent=total/6;
	printf("percent=%d",percent);
	range=percent/10;
	switch(range)
	{
		case 0:
		case 1:
                case 2:
		case 3:
			printf("Grade = Fail ");
			break;
		case 4:
			printf("Grade = Third division");
			break;
		case 5:
			printf("Grade = Second division");
			break;

		case 6:
		case 7:
			printf("Grade = First division");
			break;
		case 8:
		case 9:
		case 10:
			printf("Grade = Honours");
			break;
		default:
			printf("re enter marks");
	}
}
