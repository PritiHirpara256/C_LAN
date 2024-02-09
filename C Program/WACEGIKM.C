#include<stdio.h>
#include<conio.h>
void main()
{
    char i=65;
    clrscr();
    while(i<=90)
    {
	 if(i%2==1)
	 {
	      printf("%c",i);
	 }
	 i++;
    }
    getch();
}