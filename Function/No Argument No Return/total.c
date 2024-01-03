#include<stdio.h>
int total()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
	sum+=i;
	}
	printf("%d",sum);
}
int main()
{
	int A;
	A=total();
}