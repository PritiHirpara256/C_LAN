#include<stdio.h>
int series(int x)
{
	int P;
	P=x;
	return P;
}
int main()
{
	int i=1,P;
	while(i<=50)
	{
		if(i%2==1)
		printf("%d ",i);
		i++;
	}
	P=series(i);
}