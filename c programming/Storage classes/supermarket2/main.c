#include"nsm2.h"

int main()
{
	int i=1,select,j=0;                                   //j= no.of customers
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
                                j=j+1;
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
                                quit(j);
				break;
			}

	}
	}
	return 0;
}
