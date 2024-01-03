#include<stdio.h>
int main()
{
	int arr[3][3],arr1[3][3],i,j,sum=0;
	//1st Array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("Enter a value:");
			scanf("%d",&arr[i][j]);
		}
	}
	
	//2nd Array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			printf("Enter a value:");
			scanf("%d",&arr1[i][j]);
		}
	}	
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		 {	
			printf("%d ",arr[i][j]); 
		 }
		 printf("\t");
		for(j=0;j<3;j++)
		 {	
			printf("%d ",arr1[i][j]); 
		 }
		 printf("\t");
		 for(j=0;j<3;j++)
		 {	
			sum=arr[i][j]+arr1[i][j];
			printf("%d ",sum); 
		 }
	printf("\n");
	}	
}