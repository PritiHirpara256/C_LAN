#include<stdio.h>
int series(int x,int y)
{
	int P,i;
	P=i;
	
}
int main()
{	
	int i=1,n;
	printf("enter value:");
	scanf("%d",&n);
	while(i<=n){
	if(i%2==0)
	{	
	printf("%d ",i*i);
	}
	else
	{
	printf("%d ",i);
	}  
	i++;}
	series(i,n);	
}