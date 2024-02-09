#include<stdio.h>
#include<conio.h>
void main()
{
    int a=40,b=50;
    clrscr();
    printf("before swap a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swap a=%d,b=%d",a,b);
    getch();
}