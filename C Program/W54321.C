#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5,j;
	clrscr();
	while(i>=1)
	{
		j=1;
		while(j<=5)
		{
			printf("%d ",i);
			j++;
		}
		printf("\n");
		i--;
	}
	getch();
}