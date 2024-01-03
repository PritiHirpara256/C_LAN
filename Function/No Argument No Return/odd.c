#include<stdio.h>
int odd()
{
	int i;
	for(i=1;i<=50;i++)
	{
	if(i%2==1)
	{
	printf("%d",i);
	}
	}
}
int main()
{
	int A;
	A=odd();
}