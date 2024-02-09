#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,p,a=0,b=1;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   while(i<=n)
   {
     p=a+b;
     a=b;
     b=p;
     printf("%d",p);
     i++;
   }
   getch();
}