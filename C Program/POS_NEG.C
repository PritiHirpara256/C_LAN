#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter a value");
   scanf("%d",&a);
   if(a>0)
   {
	printf("value is positive");
   }
   else if(a==0)
   {
	 printf("it is zero");
   }
   else
   {
	   printf("value is negative");
   }
   getch();
}