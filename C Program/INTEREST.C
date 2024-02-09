#include<stdio.h>
#include<conio.h>
void main()
  {
    float principal,rate,time,interest;
    clrscr();
    printf("Enter the amount:");
    scanf("%f",&principal);
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    printf("days of interest:");
    scanf("%f",&time);
    interest=(principal*rate*time)/10000;
    printf("Simple interest: %f",interest);
    getch();
  }