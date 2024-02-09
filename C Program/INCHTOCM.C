#include<stdio.h>
#include<conio.h>
void main()
{
  float inches,cm;
  clrscr();
  printf("enter inches:");
  scanf("%f",&inches);
  cm=inches*2.54;
  printf("cm: %f",cm);
  getch();
}