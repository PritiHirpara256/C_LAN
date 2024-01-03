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
		if(i%4==1)
		{
			printf("%c ",i);
		}
		else
		{
			printf("%c ",i+32);
		}
		i+=2;
	}while(i<=90);
	P=series(i);
}