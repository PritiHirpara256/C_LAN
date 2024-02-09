#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,j,a=1;
    clrscr();
    while(i<=5)
    {
      j=1;
      while(j<=i)
      {
	if(a%2==0)
	{
	 printf("0 ");
	}
	else
	{
	 printf("1 ");
	}
	a++;
	j++;
      }
      printf("\n");
      i++;
    }
    getch();
}