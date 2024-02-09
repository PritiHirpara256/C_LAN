#include<stdio.h>
#include<conio.h>
void main()
{
  float base,height,area;
  clrscr();
  printf("enter base:");
  scanf("%f",&base);
  printf("Enter height:");
  scanf("%f",&height);
  area=(base*height)/2;
  printf("area of triangle: %f",area);
  getch();
}