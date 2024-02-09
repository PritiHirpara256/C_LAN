#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,sum=0;
   clrscr();
   do{
       sum+=i;
       i++;
   }while(i<=10);
   printf("%d",sum);
   getch();
}