#include<stdio.h>
int largest()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
	printf("A is largest");
	}
	else if(b>a && b>c)
	{
	printf("B is largest");
	}
	else
	{
	printf("C is largest");
	}
	return a;
}
int main()
{
	int P,a,b,c;
	P=largest();	
}