#include<stdio.h>
int array(int a,int b,int c)
{
	int P;
	P=a,b,c;
	return P;
}
int main()
{
	int arr[3][3],i,j,P;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value:");
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
	P=array(arr[i][j],i,j);
}