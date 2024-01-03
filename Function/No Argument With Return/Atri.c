#include<stdio.h>
int convert()
{
	float base,height,area;
	printf("Enter base of triangle:");
	scanf("%f",&base);
	printf("Enter height of triangle:");
	scanf("%f",&height);
	return area=(base*height)/2;
}
int main()
{
	float A;
	A=convert();
	printf("area of triangle: %f",A);
}