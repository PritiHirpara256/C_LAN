#include<stdio.h>
#include<conio.h>
void main()
{
   float a=0.5,i=0.5,n;
   clrscr();
   printf("Enter a value:");
   scanf("%f",&n);
   printf("%f",a);
   do{
       printf("%f ",a+i);
       a=a+i;
       i++;
   }while(i<=n);
   getch();
}