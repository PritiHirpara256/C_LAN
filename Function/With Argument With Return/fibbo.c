#include<stdio.h>
int series(int a,int b,int c,int d,int e)
{
	int P;
	P=a;
	return P;
}
int main()
{
	int i=1,P,a=0,b=1,n,p;
	printf("enter a value:");
	scanf("%d",&n);
	while(i<n)
	{
		p=a+b;
		a=b;
		b=p;
		printf("%d ",p);
		i++;
	}
	P=series(i,p,a,b,n);
}