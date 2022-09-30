#include<stdio.h>
#define MAX(x,y) if(x>y){printf("x is big");}else{printf("y is big");}
int main()
{
	int x,y;
	printf("enter x and y values=");
	scanf("%d%d",&x,&y);
	MAX(x,y);
	return 0;
}
