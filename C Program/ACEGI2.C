#include<stdio.h>
#include<conio.h>
void main()
{
  char i,a;
  clrscr();
  for(i=0;i<=24;i+=2)
  {
   if(i%4==0)
   {
    printf("%c\n",i+65);
   }
   else
   {
     printf("%c\n",i+97);
   }
  }
  getch();
}