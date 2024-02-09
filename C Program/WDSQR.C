#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,p;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   do{
       p=i*i;
       printf("%d ",p);
       i++;
   }while(i<=n);
   getch();
}