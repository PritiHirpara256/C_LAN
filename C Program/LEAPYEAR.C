#include<stdio.h>
#include<conio.h>
void main()
{
   int year;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&year);
   clrscr();
   if(year%4==0)
   {
	printf("it is leap year");
   }
   else
   {
	 printf("it is not leap year");
   }
   getch();
}