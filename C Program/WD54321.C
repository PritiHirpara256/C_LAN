#include<stdio.h>
#include<conio.h>
void main()
{
  int i=5,j;
  clrscr();
  do{
    j=1;
    do{
       printf("%d ",i);
       j++;
    }while(j<=5);
     printf("\n");
     i--;
  }while(i>=1);
  getch();
}

