#include<stdio.h>
int series(int a,int b,int c,int d,int e)
{
	int P;
	P=a;
}
int main()
{
	int i=1,a=0,b=1,n,p;
	printf("Enter value:");
	scanf("%d",&n);
	do{
		p=a+b;
		a=b;
		b=p;
		printf("%d ",p);
		i++;	
	}while(i<=n);
	series(i,a,b,n,p);
}