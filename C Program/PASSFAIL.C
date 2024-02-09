#include<stdio.h>
#include<conio.h>
void main()
{
   int marks;
   clrscr();
   printf("Enter a marks:");
   scanf("%d",&marks);
   clrscr();
   if(marks>35)
   {
    printf("you are pass");
   }
   else
   {
    printf("you are fail");
   }
   getch();
}