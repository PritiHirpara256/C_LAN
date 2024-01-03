#include<stdio.h>
int series()
{
	int i,n,p=1;
	printf("Enter value:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	printf("%d",p);
	p*=2;
	}
	return i;
}
int main()
{
	int P;
	P=series();
}