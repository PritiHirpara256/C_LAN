#include<stdio.h>
#include<conio.h>
void main()
{
  char i=65,j;
  clrscr();
  do{
    j=1;
    do{
       printf("%c ",i);
       j++;
    }while(j<=5);
     printf("\n");
     i++;
  }while(i<=69);
  getch();
}

