#include<stdio.h>
#include<conio.h>
void main()
{
    char i=65,p;
    clrscr();
    while(i<=90)
    {
	p=i+32;
	printf("%c%c ",i);
	i++;
    }
    getch();
}