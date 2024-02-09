#include<stdio.h>
#include<conio.h>
void main()
{
   float a=0.5,i=0.5,n;
   clrscr();
   printf("Enter a value:");
   scanf("%f",&n);
   printf("%f",a);
   while(i<=n)
   {
    printf("%f ",a+i);
    a=a+i;
    i++;
   }
   getch();
}