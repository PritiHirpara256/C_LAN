#include<stdio.h>
int oddtotal()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
	if(i%2==1)
	sum+=i;
	}
	printf("%d",sum);
}
int main()
{
	int A;
	A=oddtotal();
}