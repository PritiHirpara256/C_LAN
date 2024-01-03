#include<stdio.h>
int array(int a,int b,int c,int d,int e)
{
	int P;
	P=a,b,c,d,e;
	printf("sum of total no: %d",P);
}
int main()
{
	int arr[5],i,evensum=0,oddsum=0,totalsum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter a value:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		totalsum=totalsum+arr[i];
		if(arr[i]%2==0)
		{
		evensum=evensum+arr[i];
		}
		else
		{
		oddsum=oddsum+arr[i];
		}
	}
	printf("sum of even no: %d",evensum);
	printf("sum of odd no: %d",oddsum);
	array(arr[i],i,totalsum,evensum,oddsum);
}