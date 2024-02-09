#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,a=1,n;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   do{
       printf("%d ",a*i);
       a=a*2;
       i++;
   }while(i<=n);
   getch();
}