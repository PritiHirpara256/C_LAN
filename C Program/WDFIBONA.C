#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,a=0,b=1,n,p;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   do{
       p=a+b;
       a=b;
       b=p;
       printf("%d ",p);
       i++;
   }while(i<=n);
   getch();
}