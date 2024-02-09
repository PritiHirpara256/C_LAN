#include<stdio.h>
#include<conio.h>
void main()
{
  char i=65,j;
  clrscr();
  do{
    j=i;
    do{
	 printf("%c ",j);
       j--;
    }while(j>=65);
     printf("\n");
     i++;
  }while(i<=69);
  getch();
}