#include<stdio.h>
int pattern()
{
	char i,j;
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%c ",j);
		}printf("\n");
	}
}
int main()
{
	pattern();
}