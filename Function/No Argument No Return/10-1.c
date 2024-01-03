#include<stdio.h>
int number()
{
	int i;
	for(i=10;i>=1;i--)
	{
		printf("%d",i);
	}
	return i;
}
int main()
{
	int P,i;
	P=number();
}