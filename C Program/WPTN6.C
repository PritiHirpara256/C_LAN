#include<stdio.h>
#include<conio.h>
void main()
{
    char i=65,j;
    clrscr();
    while(i<=69)
    {
      j=65;
      while(j<=i)
      {
	printf("%c ",j);
	j++;
      }
      printf("\n");
      i++;
    }
    getch();
}