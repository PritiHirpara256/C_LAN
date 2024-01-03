#include<stdio.h>
int series(char a)
{
	char P;
	P=a;
	return P;
}
int main()
{
	char i=65,P;
	do{
		printf("%c ",i);
		i++;
	}while(i<=90);
	P=series(i);
}