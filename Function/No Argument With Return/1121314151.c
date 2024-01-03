#include<stdio.h>
int pattern()
{
	int i,j,a=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",a);
			a++;
		}
		a+=5;
		printf("\n");
	}	
	return i;
}
int main()
{
	int P;	
	P=pattern();	
}