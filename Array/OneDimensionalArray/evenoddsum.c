#include<stdio.h>
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
        	printf("sum of even element: %d\n",evensum);
		printf("sum of odd element: %d\n ",oddsum);
		printf("sum of all element: %d",totalsum);
}