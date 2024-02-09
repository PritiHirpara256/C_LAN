#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,j,a=1;
  clrscr();
  do{
    j=1;
    do{
    if(a%2==0)
    {
       printf("0");
       }
       else
       {
	 printf("1");
       }
       a++;
       j++;
    }while(j<=i);
     printf("\n");
     i++;
  }while(i<=5);
  getch();
}