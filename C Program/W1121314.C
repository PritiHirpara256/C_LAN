#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j,a=11;
	clrscr();
	while(i<=5)
	{
		j=1;
		while(j<=5)
		{
			printf("%d ",a);
			a++;
			j++;
		}
		a+=5;
		printf("\n");
		i++;
	}
	getch();
}