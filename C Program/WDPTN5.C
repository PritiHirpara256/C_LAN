#include<stdio.h>
#include<conio.h>
void main()
{
  int i=5,j;
  clrscr();
  do{
    j=5;
    do{
       printf("%d ",j);
       j--;
    }while(j>=i);
     printf("\n");
     i--;
  }while(i>=1);
  getch();
}

