#include<stdio.h>
int series(char x)
{
	int P;
	P=x;
	return P;
}
int main()
{
	char i=65,P;
	while(i<90)
	{
		if(i%2==1)
		printf("%c ",i);
		i++;
	}
	P=series(i);
}