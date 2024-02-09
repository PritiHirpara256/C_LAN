#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,p=1;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   do{
       printf("%d ",p);
       i++;
       p*=2;
   }while(i<=n);
   getch();
}