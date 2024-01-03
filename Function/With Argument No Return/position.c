#include<stdio.h>
int array(int a,int b,int c,int d)
{
	int P;
	P=a,b,c,d;
}
int main()
{
	int arr[5],i,even=0,odd=0;
	for(i=0;i<5;i++)
	{
		printf("Enter a value:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
		even=even+arr[i];
		}
		else
		{
		odd=odd+arr[i];
		}
	}
	printf("sum of even no: %d",even);
	printf("sum of odd no: %d",odd);
	array(arr[i],i,even,odd);
}