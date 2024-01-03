#include<stdio.h>
int series(float a,float b,float c)
{
	float P;
	P=a,b,c;
	return P;
}
int main()
{
	float a=0.5,i=0.5,n,P;
	printf("Enter value:");
	scanf("%f",&n);
	printf("%f\n",a);
	do{
		printf("%f \n",a+i);
		a=a+i;
		i++;
	}while(i<=n);
	P=series(a,i,n);
}