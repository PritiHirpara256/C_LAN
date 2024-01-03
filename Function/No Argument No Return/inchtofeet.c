#include<stdio.h>
int convert()
{
	float inches,feets;
	printf("Enter inches");
	scanf("%f",&inches);
	feets=inches/12;
	printf("inches into feets: %f",feets);
}
int main()
{
	convert();
}