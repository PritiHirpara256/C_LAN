#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,j;
  clrscr();
  do{
    j=1;
    do{
       printf("* ");
       j++;
    }while(j<=i);
     printf("\n");
     i++;
  }while(i<=5);
  getch();
}

