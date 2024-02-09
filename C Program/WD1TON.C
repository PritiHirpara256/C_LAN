#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   do{
      printf("%d ",i);
      i++;
   }while(i<=n);
   getch();
}