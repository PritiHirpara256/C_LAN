#include<stdio.h>
#include<conio.h>
void main()
{
    char i=1,j,a=65;
    clrscr();
    while(i<=5)
    {
      j=1;
      while(j<=i)
      {
	if(j%2==1)
	{
	 printf("%c ",a+32);
	 a++;
	}
	else
	{
	 printf("%c ",a++);
	}
	j++;
      }
      printf("\n");
      i++;
    }
    getch();
}