#include<stdio.h>
int Addition()
{
	int guj,eng,math;
	float percentage;
	printf("Enter a guj marks:");
	scanf("%d",&guj);
	printf("Enter a eng marks:");
	scanf("%d",&eng);
	printf("Enter a math marks:");
	scanf("%d",&math);
	printf("total is: %d",guj+eng+math);
	printf("\npercentage is: %f",percentage=((guj+eng+math)*100)/180);
}
int main()
{
	Addition();
}