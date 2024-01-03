#include<stdio.h>
struct bill{
	int srno;	
	char name[50];
	float rate,qty,amt,dis,billamt,GST,netbill;
};
int main()
{
	struct bill a[1];
	for(int i=0;i<1;i++)
	{
		printf("Enter srno ");
		scanf("%d",&a[i].srno);
		printf("Enter name ");
		scanf("%s",&a[i].name);
		printf("Enter rate ");
		scanf("%f",&a[i].rate);
		printf("Enter qty ");
		scanf("%f",&a[i].qty);
		printf("\n");
	}
	printf("srno\tname\trate\tqty\tamt\tdis\tbillamt\t\tGST\tnetbill");
	for(int i=0;i<1;i++)
	{
		printf("\n%d\t%s\t%.2f\t%.2f",a[i].srno,a[i].name,a[i].rate,a[i].qty);
		a[i].amt=a[i].rate*a[i].qty;
		printf("\t%.2f",a[i].amt);
		a[i].dis=(a[i].amt*5)/100;
		printf("\t%.2f",a[i].dis);
		a[i].billamt=a[i].amt-a[i].dis;		
		printf("\t%.2f",a[i].billamt);
		a[i].GST=(a[i].billamt*18)/100;
		printf("\t\t%.2f",a[i].GST);
		a[i].netbill=a[i].billamt+a[i].GST;
		printf("\t%.2f",a[i].netbill);
		
	}
}