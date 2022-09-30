#include"nsm2.h"
static int tsales=0,nsales=0;
void sales()
{
	int n,s,select;
	printf("enter no.of items required=");
	scanf("%d",&n);
        s=stock();
	if(s>=n)
	{
		deletestock(n);
                 tsales=tsales+n;
                 nsales=nsales+1;
	}
	else 
	{
		printf("soory we do not have enough stock\nchoose one option from below\n1-to buy %d stock what we have\n2-to cancel",s);
                scanf("%d",&select);
                if(select==1)
                   {
                       deletestock(s);
                       tsales=tsales+s;
                       nsales=nsales+1;                      
                    }
                 else
                   {
                      printf("thank you visit again\n");
                    }
	}

}
    int totalsales()
         {
                     return tsales;
          }
        int noofsales()
          {
                     return nsales;
           }
