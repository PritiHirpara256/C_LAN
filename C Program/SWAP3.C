#include<stdio.h>
#include<conio.h>
void main()
{
     int a=40,b=50,c;
     clrscr();
     printf("before swap a=%d,b=%d",a,b);
     c=a;
     a=b;
     b=c;
     printf("\nafter swap a=%d,b=%d",a,b);
     getch();
}