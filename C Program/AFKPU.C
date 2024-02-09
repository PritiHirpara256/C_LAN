#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j,a=65;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
	getch();

}