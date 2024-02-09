#include<stdio.h>
#include<conio.h>
void main()
{
   int A,B,C;
   clrscr();
   printf("Enter a value of A:");
   scanf("%d",&A);
   printf("Enter a value of B:");
   scanf("%d",&B);
   printf("Enter value of C:");
   scanf("%d",&C);
   clrscr();
   if(A>B && A>C)
   {
	printf("A is large");
   }
   else if(B>A && B>C)
   {
	 printf("B is large");
   }
   else
   {
	printf("C is large");
   }
   getch();
}