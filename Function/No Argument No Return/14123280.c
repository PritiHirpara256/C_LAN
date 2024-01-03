#include<stdio.h>
int series()
{
	int i,n,p=1;
	printf("Enter value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d",p*i);
	p=p*2;
	}
	return i;
}
int main()
{
	int P;
	P=series();
}