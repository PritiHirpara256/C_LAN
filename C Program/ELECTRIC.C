#include<stdio.h>
#include<conio.h>
void main()
{
    int unit;
    float charge,surch;
    clrscr();
    printf("enter units");
    scanf("%d",&unit);
    if(unit<=100)
    {
    charge=unit*0.60+50;
    }
    else if(unit<=300)
    {
    charge=50+60+(unit-100)*0.80;
    }
    else
    {
    charge=50+60+160+(unit-300)*0.90;
    }
    printf("bill:- %f",charge);
    if(charge>=300)
    {
    surch=charge+(charge*0.15);
    printf("your final bill is: %f",surch);
    }
    getch();
}