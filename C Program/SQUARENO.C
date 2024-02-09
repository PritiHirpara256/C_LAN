#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,p;
   clrscr();
   printf("Enter value:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     p=i*i;
     printf("%d\t",p);
   }
   getch();
}