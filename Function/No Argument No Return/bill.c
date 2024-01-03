#include<stdio.h>
int bill()
{
	float rate,qty,amt,dis,billamt,GST,netbill;
	printf("rate:");
	scanf("%f",&rate);
	printf("qty:");
	scanf("%f",&qty);
	amt=rate*qty;
	dis=(amt*5)/100;
	billamt=amt-dis;
	GST=(billamt*18)/100;
	netbill=billamt+GST;
	printf("rate\t\tqty\t\tamt\t\tdis\t\tbillamt\t\tGST\t\tnetbill\n");
	printf("%2f\t%2f\t%2f\t%2f\t%2f\t%2f\t%2f", rate,qty,amt,dis,billamt,GST,netbill);
}
int main()
{
	bill();
}