#include<stdio.h>
#include<conio.h>
void main()
{
   char i=65;
   clrscr();
   do{
       if(i%2==1)
       printf("%c ",i);
       i++;
   }while(i<=90);
   getch();
}