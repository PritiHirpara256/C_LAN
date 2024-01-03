#include<stdio.h>
int convert()
{
	float celcius,fehrenheit;
	printf("Enter celcius");
	scanf("%f",&celcius);
	fehrenheit=(1.8*celcius)+32;
	printf("inches into cm: %f",fehrenheit);
}
int main()
{
	convert();
}