#include<stdio.h>
int leapyear()
{
	int year;
	printf("Enter year");
	scanf("%d",&year);
	return year;
}
int main()
{
	int P;
	P=leapyear();
	if(P%4==0)
	{
		printf("lepa year");
	}
	else
	{
		printf("not leap year");
	}
}