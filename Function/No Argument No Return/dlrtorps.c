#include<stdio.h>
int convert()
{
	float dollar,rupees;
	printf("Enter dollar");
	scanf("%f",&dollar);
	rupees=dollar*80;
	printf("dollar into rupees: %f",rupees);
}
int main()
{
	convert();
}