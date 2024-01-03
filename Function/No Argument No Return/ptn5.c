#include<stdio.h>
int pattern()
{
	int i,j,a=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",a);
			a++;
		}printf("\n");
	}
}
int main()
{
	pattern();
}