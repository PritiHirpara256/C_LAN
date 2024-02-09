#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,sum=0;
   clrscr();
   do{
       if(i%2==1)
       sum+=i;
       i++;
   }while(i<=10);
   printf("%d",sum);
   getch();
}