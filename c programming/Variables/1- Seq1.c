#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter a=");
	scanf("%d",&a);
        b=a/10;
        c=b/10;
        d=c/10;
        e=b%10;
        f=c%10;
        g=a%10;	
	printf("seq1=\n%d\n%d\n%d\n%d\n",g,e,f,d);
	printf("seq2=\n%d\n%d\n%d\n%d\n",d,f,e,g);
	printf("seq3=\n%d\n%d\n%d\n%d\n",d,c,b,a);
	printf("seq4=\n%d\n%d\n%d\n%d\n",a,b,c,d);
	printf("seq5=\n%d%d%d%d",g,e,f,d);
	return 0;
}
