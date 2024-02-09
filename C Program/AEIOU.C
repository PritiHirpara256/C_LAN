#include<stdio.h>
#include<conio.h>
void main()
{
   char A,B,P;
   clrscr();
   printf("Enter character:");
   scanf("%c",& P);
   A=(P=='a' || P=='e' || P=='i' || P=='o' || P=='u');
   B=(P=='A' || P=='E' || P=='I' || P=='O' || P=='U');
   if(A || B)
   {
	printf("it is vowel");
   }
   else
   {
	 printf("it is consonant");
   }
   getch();
}