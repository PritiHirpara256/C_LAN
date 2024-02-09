#include<stdio.h>
#include<conio.h>
void main()
{
   char i=65;
   clrscr();
   do{
       printf("%c ",i);
       printf("%d ",i);
       i++;
   }while(i<=90);
   getch();
}