#include<stdio.h>
int series(int a,int b)
{
	int P;
	P=a;
	return P;
}
int main()
{
	int i=1,n,P;
	printf("Enter a value:");
	scanf("%d",&n);
	do{
		if(i%2==0)
		{
			printf("%d ",i*i);
		}
		else
		{
			printf("%d ",i);
		}i++;
	}while(i<=n);
	P=series(i,n);
}