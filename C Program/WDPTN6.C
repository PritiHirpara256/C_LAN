#include<stdio.h>
#include<conio.h>
void main()
{
  char i=65,j;
  clrscr();
  do{
    j=65;
    do{
       printf("%c ",j);
       j++;
    }while(j<=i);
     printf("\n");
     i++;
  }while(i<=69);
  getch();
}

