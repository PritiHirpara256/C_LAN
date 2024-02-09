#include<stdio.h>
#include<conio.h>
void main()
{
	char i=65,j;
	clrscr();
	while(i<=69)
	{
		j=1;
		while(j<=5)
		{
			printf("%c ",i);
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}