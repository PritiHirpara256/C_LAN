#include<stdio.h>
#include<conio.h>
void main()
{
   char i,p;
   clrscr();
   for(i=65;i<=90;i++)
   {
      p=i+32;
      printf("%c%c",i);
   }
   printf("\ni: %d",i);
   getch();
}