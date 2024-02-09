#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,p=1;
   clrscr();
   printf("Enter value");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==1)
     p*=i;
   }
   printf("%d",p);
   getch();
}