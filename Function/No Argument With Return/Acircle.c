#include<stdio.h>
int convert()
{
	float radius,area;
	printf("Enter radius of area:");
	scanf("%f",&radius);
	return area=3.14*radius*radius;
}
int main()
{
	float A;
	A=convert();
	printf("area of circle: %f",A);
}