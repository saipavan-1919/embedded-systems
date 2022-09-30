#include<stdio.h>
void funcall();
int i;
int main()
{
	int n;
	printf("enter n value=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		funcall();
	return 0;
}

