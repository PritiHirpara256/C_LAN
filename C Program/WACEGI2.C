#include<stdio.h>
#include<conio.h>
void main()
{
   char i=65;
   clrscr();
   while(i<=90)
   {
      if(i%4==1)
      {
	  printf("%c ",i);
      }
      else
      {
	 printf("%c ",i+32);
      }
      i+=2;
   }
   getch();
}