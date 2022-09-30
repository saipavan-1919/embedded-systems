#include<stdio.h>
void checkstock();
void sales();
void purchase();

int main()
{
	int i=1,select;
	while(i==1)
	{
	printf("choose one option:\n1-to check stock value\n2-to sell stock\n3-to purchase stock\n4-to quit\n");
        scanf("%d",&select);
	switch(select)
	{

		case 1:
			{
		       checkstock();
				break;
			}
		case 2:
			{
				sales();
				break;
			}
		case 3:
			{
				purchase();
				break;
			}
		case 4:
			{
				i=0;
				break;
			}

	}
	}
	return 0;
}
