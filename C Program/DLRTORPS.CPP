#include<stdio.h>
#include<conio.h>
void main()
{
  float dollar,rupees;
  clrscr();
  printf("enter dollar:");
  scanf("%f",&dollar);
  rupees=dollar*70;
  printf("rupees: %f",rupees);
  getch();
}