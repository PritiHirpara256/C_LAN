#include<stdio.h>
int series(int x,int y)
{
	int P;
	P=x;
}
int main()
{
	int i,n;
	printf("Enter a value:");
	scanf("%d",&n);
	i=n;
	do{
	printf("%d ",i);
	i--;
	}while(i>=1);
	series(i,n);
}