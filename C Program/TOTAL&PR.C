#include<stdio.h>
#include<conio.h>
void main()
{
   int maths=31,hindi=32,guj=39,scored_marks,total_marks;
   float percentage;
   clrscr();
   scored_marks=maths+hindi+guj;
   total_marks=120;
   percentage=(scored_marks*100)/total_marks;
   printf("scored_marks= %d",scored_marks);
   printf("\npercentage: %f",percentage);
   getch();
}