#include<stdio.h>
extern int i;
void funcall()
{
	int a;
	a=i/10;
        if(i/10==1||a%10==1)
		printf("function called %dth time\n",i);
	else if(i%10==0||i%10==4||i%10==5||i%10==6||i%10==7||i%10==8||i%10==9)
         	printf("function called %dth time\n",i);
	else if(i%10==1)
        	printf("function called %dst time\n",i);
	else if(i%10==2)
        	printf("function called %dnd time\n",i);
	else if(i%10==3)
            	printf("function called %drd time\n",i);



}
