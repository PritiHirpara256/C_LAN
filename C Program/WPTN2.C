#include<stdio.h>
#include<conio.h>
void main()
{
      int i=1,j;
      clrscr();
      while(i<=5)
      {
	j=1;
	while(j<=i)
	{
	  printf("%d ",i);
	  j++;
	}
	printf("\n");
	i++;
      }
      getch();
}