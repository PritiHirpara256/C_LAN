#include<stdio.h>
int series(int a,int b)
{
	int P;
	P=a;
}
int main()
{
	int i=1,sum=0;
	do{
		if(i%2==0)
		sum+=i;
		i++;	
	}while(i<=10);
	printf("%d ",sum);
	series(i,sum);
}