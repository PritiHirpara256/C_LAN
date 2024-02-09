#include<stdio.h>
#include<conio.h>
void main()
{
  float a=0.5,i,n;
  clrscr();
  printf("Enter a value");
  scanf("%f",&n);
  printf("%f\n",a);

  for(i=0.5;i<=n;i++)
  {
     printf("%f\n",a+i);
     a=a+i;
  }
  getch();
}