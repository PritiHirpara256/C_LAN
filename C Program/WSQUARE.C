#include<Stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,p;
   clrscr();
   printf("Enter a value:");
   scanf("%d",&n);
   while(i<=n)
   {
	p=i*i;
	printf("%d ",p);
	i++;
   }
   getch();
}