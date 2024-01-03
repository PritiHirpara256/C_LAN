#include<stdio.h>
int even()
{
	int i;
	for(i=1;i<=50;i++)
	{
	if(i%2==0)
	{
	printf("%d",i);
	}
	}
}
int main()
{
	int A;
	A=even();
}