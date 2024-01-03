#include<stdio.h>
int marks()
{
	int marks;
	printf("Enter a marks:");
	scanf("%d",&marks);
	return marks;
}
int main()
{
	int P;
	P=marks();
	if(P>=35)
	{
	printf("you are pass");
	}
	else
	{
	printf("you are fail");
	}
}