#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,n,a=1;
 clrscr();
 printf("Enter a value:");
 scanf("%d",&n);
 while(i<=n)
 {
     printf("%d ",a*i);
     a=a*2;
     i++;
 }
 getch();
}