#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n;
     clrscr();
     printf("Enter a value");
     scanf("%d",&n);
     i=-n;
     while(i<=n)
     {
	 printf("%d",i);
	 i++;
     }
     getch();
}