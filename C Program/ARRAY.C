#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,b[5],p;
    clrscr();
    for(i=0;i<5;i++)
    {
	printf("enter a value");
	scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
	printf("%d ",a[i]);
    }
    printf("\t\n");
     for(p=0;p<5;p++)
    {
	scanf("%d",&b[p]);
    }
    for(p=0;p<5;p++)
    {
	printf("%d ",b[p]);
    }
   getch();
}