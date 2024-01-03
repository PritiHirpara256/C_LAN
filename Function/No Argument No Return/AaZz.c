#include<stdio.h>
int ABCD()
{
	char i,p;
	for(i=65;i<=90;i++)
	{
	printf("%c",i);
	printf("%c ",i+32);
	}
}
int main()
{
	int A;
	A=ABCD();
}