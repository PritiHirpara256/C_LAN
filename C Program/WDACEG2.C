#include<stdio.h>
#include<conio.h>
void main()
{
   char i=65;
   clrscr();
   do{
       if(i%4==1)
       {
       printf("%c ",i);
       }
       else
       {
	printf("%c ",i+32);
       }
       i+=2;
   }while(i<=90);
   getch();
}