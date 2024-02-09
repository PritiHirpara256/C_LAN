#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   i=-n;
   do{
       printf("%d ",i);
       i++;
   }while(i<=n);
   getch();
}