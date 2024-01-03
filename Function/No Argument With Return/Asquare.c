#include<stdio.h>
int convert()
{
	float side,area;
	printf("Enter side of area:");
	scanf("%f",&side);
	return area=side*side;
}
int main()
{
	float A;
	A=convert();
	printf("area of square: %f",A);
}