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
	  printf("%d ",a);
	  a++;
	  j++;
	}
	printf("\n");
	i++;
      }
      getch();
}