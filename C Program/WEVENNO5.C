#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    clrscr();
    while(i<=50)
    {
	if(i%2==0)
	printf("%d ",i);
	i++;
    }
    getch();
}