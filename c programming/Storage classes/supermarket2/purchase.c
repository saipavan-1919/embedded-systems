#include"nsm2.h"
static int tpurchase=0,npurchase=0;
void purchase()
{
	int n,s,select,a;
	printf("enter no .of items required to purchase=");
	scanf("%d",&n);
        s=stock();
        a=1000-s;
	if(s+n>1000)
	{
		printf("sorry we do not have enough place to store stock\nchoose one option from below\n1-to purchase stock for %d space remaining\n 2-to exit",a);
                scanf("%d",&select);
                if(select==1)
                 {
                         addstock(a);
                         tpurchase=tpurchase+a;
                         npurchase=npurchase+1;
                  }
                 else
                 {
                         printf("thank you! visit again");
                  }
	}
	else
	{
		addstock(n);         
                         tpurchase=tpurchase+n;
                         npurchase=npurchase+1;
                 
	}

}
 int totalpurchase()
{
        return tpurchase;
}
int noofpurchase()
{
        return npurchase;
}
