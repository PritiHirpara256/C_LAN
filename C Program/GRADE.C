#include<stdio.h>
#include<conio.h>
void main()
{
     int marks;
     clrscr();
     printf("Enter marks:");
     scanf("%d",&marks);
     if(marks>=75)
     {
	  printf("grade A");
     }
     else if(marks>=60)
     {
	    printf("grade B");
     }
      else if(marks>=45)
     {
	    printf("grade C");
     }
      else if(marks>=35)
     {
	    printf("grade D");
     }
       else
       {
	    printf("fail");
       }
       getch();
}
