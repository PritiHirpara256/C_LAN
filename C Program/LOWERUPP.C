#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   clrscr();
   printf("Enter character:");
   scanf("%c",& a);
   if(a>=65 && a<=90)
   {
	a=a+32;
	printf("lowercase: %c",a);
   }
   else
   {
	 a=a-32;
	 printf("uppercase: %c",a);
   }
   getch();
}