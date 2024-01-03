#include<stdio.h>
int array(int a,int b,int c,int d)
{
	int P;
	P=a,b,c,d;
	return P;
}
int main()
{
	int arr[3][3],arr1[3][3],i,j,P;
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
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
		}printf("\t");
		for(j=0;j<3;j++)
		{
			printf("%d",arr1[i][j]);
		}printf("\n");
	}
	P=array(arr[i][j],arr1[i][j],i,j);
}