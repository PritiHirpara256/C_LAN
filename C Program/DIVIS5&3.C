#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&a);
   clrscr();
   if((a%5==0) && (a%3==0))
   {
	printf("value is divisible by 5 and 3");
   }
   else
   {
	 printf("value is not divisible by 5 and 3");
   }
   getch();
}