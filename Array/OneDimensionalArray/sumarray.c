#include<stdio.h>
int main()
{
	int arr[5],arr1[5],i,sum=0;
	for(i=0;i<5;i++)
         {
		printf("Enter a value:");
		scanf("%d",&arr[i]);  
         }
	for(i=0;i<5;i++)
         {
		printf("Enter a value:");
		scanf("%d",&arr1[i]);  
         }
         for(i=0;i<5;i++)
         { 
                sum=arr[i]+arr1[i];
		printf("%d\t%d\t%d",arr[i],arr1[i],sum);
                printf("\n");
         }
}
