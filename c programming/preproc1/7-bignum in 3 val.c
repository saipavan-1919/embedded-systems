#include<stdio.h>
#define BIG(a,b,c) if(a>b){if(a>c)printf("a is big");else printf("c is big");}else{if(b>c)printf("b is big");else printf("c is big");}
int main()
{
	int a,b,c;
	float d,e,f;
	double g,h,i;
	char j,k,l;
	printf("enter a,b,c integer values=");
	scanf("%d%d%d",&a,&b,&c);
	BIG(a,b,c);
	printf("enter d,e,f float values=");
	scanf("%f%f%f",&d,&e,&f);
	BIG(d,e,f);
	printf("enter g,h,i double values=");
	scanf("%ld %ld %ld ",&g,&h,&i);
	BIG(g,h,i);
        printf("enter j,k,l char  values=");
	scanf(" %c %c %c",&j,&k,&l);
	BIG(j,k,l);
	
}
