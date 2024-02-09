#include<stdio.h>
#include<conio.h>
void main()
{
   char i=65,p;
   clrscr();
   do{
       p=i+32;
       printf("%c%c ",i);
       i++;
   }while(i<=90);
   getch();
}