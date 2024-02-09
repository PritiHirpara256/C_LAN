#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j;
	clrscr();
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			if(i%2==1)
			printf("%d ",i);
			j++;
		}
		printf("\n");
		i++;
	}
	getch();
}