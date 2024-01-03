#include<stdio.h>
int main()
{
	int arr[3][3],i,j,sum=0,sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("Enter a value:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d",arr[i][j]);
			}
			printf("\n");
		}
	//DIAGONAL MATRIX SUM
	for(i=0;i<j;i++)
		{	
			sum=sum+arr[i][i];
		}
	printf("\n sum of diagonal element: %d",sum);
	//UPPER TRIANGLE SUM
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
		if(i<j)
			{
			sum1+=arr[i][j];
		}}}
	printf("\n sum of uppertriangle element: %d",sum1);
	//LOWER TRIANGLE SUM
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
		if(i>j)
			{
			sum2+=arr[i][j];
		}}}
	printf("\n sum of lowertriangle element: %d",sum2);
}