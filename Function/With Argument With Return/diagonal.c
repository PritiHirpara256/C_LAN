#include<stdio.h>
int array(int a,int b,int c,int d,int e,int f)
{
	int P;
	P=a,b,c,d,e,f;
	return P;
}
int main()
{
	int arr[3][3],i,j,P,sum=0,sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value:");
			scanf("%d",&arr[i][j]);
		}
	}printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",arr[i][j]);
		}printf("\n");
	}
	for(i=0;i<j;i++)
		{	
			sum=sum+arr[i][i];
		}
		printf("diagonal sum: %d",sum);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(i<j)
		{		
			sum1+=arr[i][j];
		}
		}
	}
	printf("uppertriangle: %d",sum1);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(i>j)
		{		
			sum2+=arr[i][j];
		}
		}
	}
	printf("uppertriangle: %d",sum2);
	P=array(arr[i][j],i,j,sum,sum1,sum2);
}