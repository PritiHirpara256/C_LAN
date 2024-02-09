#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  clrscr();
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=5;j++)
    {
      if(i%2==1)
	{
	 printf("%d ",i);
	}
    }
    printf("\n");
  }
  getch();
}