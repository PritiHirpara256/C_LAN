#include<stdio.h>
int series(int a,int b,int c)
{
	int P;
	P=a;
}
int main()
{
	int i=1,n,p;
	printf("enter a value:");
	scanf("%d",&n);
	do{
		p=i*i;
	printf("%d",p);
	i++;	
	}while(i<=n);
	series(i,n,p);
}