#include<stdio.h>
int series(int x,int y)
{
	int P;
	P=x,y;
}
int main()
{
	int i,n;
	printf("Enter a vlaue:");
	scanf("%d",&n);
	i=-n;
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	series(i,n);
}