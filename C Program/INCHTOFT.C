#include<stdio.h>
#include<conio.h>
void main()
{
  float inches,feet;
  clrscr();
  printf("enter inches: ");
  scanf("%f",&inches);
  feet = inches / 12;
  printf("feet: %f",feet);
  getch();
}