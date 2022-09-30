#include<stdio.h>
#define R 3
#define C 10

void mystrcopy(char *,char *);
int strcomp(char *,char *);

int main()
{
	char str[R][C];
//	char str2[]="hi";
	char temp[20];
	int t,i;
	for(i=0;i<R;i++)
	{
		printf("\nenter str[%d] = ",i);
		scanf("%s",str[i]);
	}
	for(int j=0;j<R;j++)
	{
	for(i=0;i<(R-j);i++)
	{
	t=strcomp(str[i],str[i+1]);
	if(t==1)
	{
	mystrcopy(str[i],temp);
//	printf("%s\n",temp);
	mystrcopy(str[i+1],str[i]);
//	printf("%s\n",str[i]);
	mystrcopy(temp,str[i+1]);
//	printf("%s\n",str[i+1]);
	}
	}
	}
	for(i=0;i<R;i++)
	{
		printf("\n after sorting \n ");
		printf("str[%d]=%s\n",i,str[i]);
	}

}

void mystrcopy(char *str1,char *str2)
{
	int i;
	for(i=0;*(str1+i)!='\0';i++)
	{
		*(str2+i)=*(str1+i);
	}
	*(str2+i)='\0';

}

int strcomp(char *str1,char *str2)
{
	int i,t;
	for(i=0;(*(str1+i)!='\0')&&(*(str2+i)!='\0');i++)
	{
		if((*(str1+i))>(*(str2+i)))
		{
			t=1;
			break;
		}
		else if((*(str1+i))<(*(str2+i)))
		{
			t=-1;
			break;
		}
		else if((*(str1+i))==(*(str2+i)))
		{
			t=0;
		}
	}
	return t;
}
