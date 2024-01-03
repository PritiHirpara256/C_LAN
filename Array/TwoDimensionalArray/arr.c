#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("Enter a value:");
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("%d",arr[i][j]);
		}printf("\n");
	}
	
}