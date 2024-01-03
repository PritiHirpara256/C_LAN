#include<stdio.h>
int series(int a,int b,int c)
{
	int P;
	P=a;
	return P;
}
int main()
{
	int i=1,P,n,a=1;
	printf("enter a value:");
	scanf("%d",&n);
	while(i<n)
	{
		printf("%d ",a*i);
		a=a*2;
		i++;
	}
	P=series(i,a,n);
}