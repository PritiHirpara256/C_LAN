#include<stdio.h>
#include<conio.h>
void main()
{
  float celsius,fahrenheit;
  clrscr();
  printf("enter celsius:");
  scanf("%f",&celsius);
  fahrenheit=(1.8*celsius)+32;
  printf("fahrenhit: %f",fahrenheit);
  getch();
}