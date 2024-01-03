#include<stdio.h>
int convert()
{
	float length,width,area;
	printf("Enter length of rectangle:");
	scanf("%f",&length);
	printf("Enter width of rectangle:");
	scanf("%f",&width);
	return area=length*width;
}
int main()
{
	float A;
	A=convert();
	printf("area of rectangle: %f",A);
}