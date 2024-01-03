#include<stdio.h>
int series(int a)
{
	int P;
	P=a;
	return P;
}
int main()
{
	int i=1,P;
	do{
		if(i%2==0)
		printf("%d ",i);
		i++;
	}while(i<=50);
	P=series(i);
}