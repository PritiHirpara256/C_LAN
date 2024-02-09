#include<stdio.h>
#include<conio.h>
void main()
{
      char i=1,j,a=65;
      clrscr();
      while(i<=5)
      {
	j=1;
	while(j<=5)
	{
	  printf("%c ",a);
	  a++;
	  j++;
	}
	printf("\n");
	i++;
      }
      getch();
}