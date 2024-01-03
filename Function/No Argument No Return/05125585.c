#include<stdio.h>
int series()
{
	float a=0.5,i,n;
	printf("Enter value:");
	scanf("%f",&n);
	printf("%f\n",a);
	for(i=0.5;i<=n;i++)
	{
	printf("%f\n",a+i);
	a=a+i;
	}
	return i;
}
int main()
{
	int P;
	P=series();
}