#include<stdio.h>
#include<conio.h>
void main()
{
       int i=1,sum=0;
       clrscr();
       while(i<=10)
       {
	   sum+=i;
	   i++;
       }
       printf("%d",sum);
       getch();
}
