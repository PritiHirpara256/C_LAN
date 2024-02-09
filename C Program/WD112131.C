#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,j,a=11;
  clrscr();
  do{
    j=1;
    do{
       printf("%d ",a);
       a++;
       j++;
    }while(j<=5);
    a+=5;
     printf("\n");
     i++;
  }while(i<=5);
  getch();
}

