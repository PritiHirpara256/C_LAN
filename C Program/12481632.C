#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,p=1;
   clrscr();
   printf("Enter value:");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
	printf("%d\t",p);
	p*=2;
   }
   getch();
}