#include<stdio.h>
int pattern()
{
	char i,j,a=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}	
	return i;
}
int main()
{
	int P;	
	P=pattern();	
}