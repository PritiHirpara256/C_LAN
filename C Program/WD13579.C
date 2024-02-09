#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,j;
  clrscr();
  do{
    j=1;
    do{
       if(i%2==1)
       printf("%d ",i);
       j++;
    }while(j<=5);
     printf("\n");
     i++;
  }while(i<=10);
  getch();
}

