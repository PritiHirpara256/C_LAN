#include<stdio.h>
int pattern()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}printf("\n");
	}
	return i;
}
int main()
{
	int P;
	P=pattern();
}