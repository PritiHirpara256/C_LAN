#include<stdio.h>
int convert()
{
	float inches,cm;
	printf("Enter inches");
	scanf("%f",&inches);
	cm=inches*2.54;
	printf("inches into cm: %f",cm);
}
int main()
{
	convert();
}