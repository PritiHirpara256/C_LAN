#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j,k;
    clrscr();
    while(i<=5)
    {
      j=1;
      while(j<=5-i)
      {
	 printf(" ");
	 j++;
      }
      k=1;
      while(k<=i)
      {
	 printf("* ");
	 k++;
      }
      printf("\n");
      i++;
    }
    i=4;
    while(i>=1)
    {
      j=1;
      while(j<=5-i)
      {
	printf(" ");
	j++;
      }
      k=1;
      while(k<=i)
      {
	printf("* ");
	k++;
      }
      printf("\n");
      i--;
    }
    getch();
}