#include<stdio.h>
int series(int x,int y)
{
	int P;
	P=x;
}
int main()
{
	int i=1,n;
	printf("Enter a value:");
	scanf("%d",&n);
	do{
	printf("%d ",i);
	i++;
	}while(i<=n);
	series(i,n);
}