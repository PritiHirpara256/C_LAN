#include<stdio.h>
int convert()
{
	float principal,rate,time,interest;
	printf("Enter the amount:");
	scanf("%f",&principal);
	printf("Enter the rate of interest:");
	scanf("%f",&rate);
	printf("Enter days of interest:");
	scanf("%f",&time);
	return interest=(principal*rate*time)/10000;
}
int main()
{
	float A;
	A=convert();
	printf("simple interest: %f",A);
}