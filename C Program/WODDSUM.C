#include<stdio.h>
#include<conio.h>
void main()
{
       int i=1,sum=0;
       clrscr();
       while(i<=10)
       {
	   if(i%2==1)
	   sum+=i;
	   i++;
       }
       printf("%d",sum);
       getch();
}