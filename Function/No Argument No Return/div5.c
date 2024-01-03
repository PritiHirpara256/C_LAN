#include<stdio.h>
int divisible()
{
	int num;
	printf("Enter a value:");
	scanf("%d",&num);
	return num;
}
int main()
{
	int P;
	P=divisible();
	if(P%5==0)
	{
	printf("it is divisible by 5");
	}
	else
	{
	printf("it is not divisible by 5");
	}
}