#include<stdio.h>
int main()
{
	int arr[5],arr1[5],i;
	for(i=0;i<5;i++)
         {
		printf("Enter a value:");
		scanf("%d",&arr[i]);
                printf("Enter a value:");
                scanf("%d",&arr1[i]);   
         }
         for(i=0;i<5;i++)
         {
		printf("%d\t%d",arr[i],arr1[i]);
                printf("\n");
         }
}