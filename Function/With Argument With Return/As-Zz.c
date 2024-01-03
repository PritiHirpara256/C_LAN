#include<stdio.h>
int series(char x,char y)
{
	char P;
	P=x,y;
	return P;
}
int main()
{
	char i=65,P,a;
	while(i<=90)
	{
		a=i+32;
		printf("%c%c  ",i,a);
		i++;
	}
	P=series(i,a);
}