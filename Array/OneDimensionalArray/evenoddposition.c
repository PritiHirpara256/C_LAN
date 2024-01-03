#include<stdio.h>
int main()
{
	int arr[5],i,odd=0,even=0;
	for(i=0;i<5;i++)
	{
		printf("Enter a value:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		if(i%2==0)
		{
			odd=odd+arr[i];
		}
		else
		{
			even=even+arr[i];
		}
	}
		printf("sum of even position: %d\n",even);
		printf("sum of odd position: %d",odd);
}