#include<stdio.h>
int series()
{
	char i;
	for(i=65;i<=90;i+=2)
	{
	if(i%4==1)
	{
	printf("%c\n",i);
	}
	else
	{
	printf("%c\n",i+32);
	}
	}
	return i;
}
int main()
{
	int P;
	P=series();
}