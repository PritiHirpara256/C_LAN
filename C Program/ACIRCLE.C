#include<stdio.h>
#include<conio.h>
void main()
{
    float radius,area;
    clrscr();
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area of circle is %f",area);
    getch();
}