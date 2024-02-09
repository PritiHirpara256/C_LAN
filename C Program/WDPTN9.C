#include<stdio.h>
#include<conio.h>
void main()
{
  char i=1,j,a=65;
  clrscr();
  do{
    j=1;
    do{
       printf("%c ",a);
       a++;
       j++;
    }while(j<=i);
     printf("\n");
     i++;
  }while(i<=5);
  getch();
}
