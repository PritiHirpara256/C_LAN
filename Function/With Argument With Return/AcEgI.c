#include<stdio.h>
int series(int a)
{
	int P;
	P=a;
	return P;
}
int main()
{
	char i=65,P;
	while(i<=90)
	{
		if(i%4==1)
		{
		printf("%c ",i);
		}
		else
		{
			printf("%c ",i+32);
		}
	i+=2;
	}
	P=series(i);
}