#include<stdio.h>
#include<conio.h>
void main()
{
  float side,area;
  clrscr();
  printf("enter side:");
  scanf("%f",&side);
  area=side*side;
  printf("area of square: %f",area);
  getch();
}