#include<stdio.h>
#include<conio.h>
void main()
{
  int a=1,i,n;
  clrscr();
  printf("Enter a value");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%d\t",a*i);
     a=a*2;
  }
  getch();
}