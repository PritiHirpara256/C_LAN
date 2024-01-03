#include<stdio.h>
int series(int a,int b,int c)
{
	int P;
	P=a;
	return P;
}
int main()
{
	int i=1,n,P,s=1;
	printf("Enter a value:");
	scanf("%d",&n);
	do{
		printf("%d ",s*i);
		s=s*2;
		i++;
	}while(i<=n);
	P=series(i,n,s);
}