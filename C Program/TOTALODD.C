#include<stdio.h>
#include<conio.h>
void main()
{
   int i,sum=0;
   clrscr();
   for(i=0;i<=10;i++)
   {
     if(i%2==1)
     sum+=i;
   }
   printf("%d",sum);
   getch();
}