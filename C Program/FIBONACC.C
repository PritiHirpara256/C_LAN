#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,p,a=0,b=1;
  clrscr();
  printf("Enter value:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     p=a+b;
     a=b;
     b=p;
  printf("%d\t",p);
  }
getch();
}