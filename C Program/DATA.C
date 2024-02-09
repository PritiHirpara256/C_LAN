#include<stdio.h>
#include<conio.h>
void main()
{
    float rate,qty,amt,dis,billamt,gst,netbill;
    clrscr();
    printf("enter rate:");
    scanf("%f",&rate);
    printf("\nenter qty:");
    scanf("%f",&qty);
    amt=rate*qty;
   // printf("\nenter amt:");
    dis=(amt*5)/100;
    //printf("\nenter dis:");
    billamt=amt-dis;
    //printf("\nenter billamt:");
    gst=(billamt*18)/100;
    //printf("\nenter gst:");
    netbill=billamt+gst;
    //printf("\nenter netbill:");
    printf("rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill\n");
    printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",rate,qty,amt,dis,
    billamt,gst,netbill);
    getch();
}