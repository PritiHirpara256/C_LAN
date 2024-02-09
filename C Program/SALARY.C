#include<stdio.h>
#include<conio.h>
void main()
{
    int gross,salary;
    float HRA,DA;
    clrscr();
    printf("enter salary:-");
    scanf("%d",&salary);
    if(salary<=5000)
    {
    HRA=salary*0.8;
    DA=salary*0.20;
    }
    else if(salary<=10000)
    {
    HRA=salary*0.12;
    DA=salary*0.30;
    }
    else if(salary<=15000)
    {
    HRA=salary*0.15;
    DA=salary*0.40;
    }
    else
    {
    HRA=salary*0.20;
    DA=salary*0.50;
    }
    gross=salary+HRA+DA;
    printf("your HRA is: %f",HRA);
    printf("\nyour DA is: %f",DA);
    printf("\nthis is your gorss salary: %d",gross);
    getch();
}

