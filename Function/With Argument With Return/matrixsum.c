#include<stdio.h>
int array(int a,int b,int c,int d,int e)
{
	int P;
	P=a,b,c,d,e;
	return P;
}
int main()
{
	int arr[3][3],arr1[3][3],i,j,P,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value:");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value:");
			scanf("%d",&arr1[i][j]);
		}
	}printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
		}printf("\t");
		for(j=0;j<3;j++)
		{
			printf("%d",arr1[i][j]);
		}printf("\t");
		for(j=0;j<3;j++)
		{
			sum=arr[i][j]+arr1[i][j];
			printf("%d",sum);
		}printf("\n");
	}
	P=array(arr[i][j],arr1[i][j],i,j,sum);
}