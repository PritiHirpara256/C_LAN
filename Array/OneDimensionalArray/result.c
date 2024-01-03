#include<stdio.h>
int main()
{
	int arr[5],arr1[5],arr2[5],i,sum=0;
        float pr;
	for(i=0;i<5;i++)
         {
		printf("Enter a value:");
		scanf("%d",&arr[i]);  
         }
	printf("\n");
	for(i=0;i<5;i++)
         {
		printf("Enter a value:");
		scanf("%d",&arr1[i]);  
         }
	printf("\n");
	for(i=0;i<5;i++)
         {
		printf("Enter a value:");
		scanf("%d",&arr2[i]);  
         }
	printf("\n");
	printf("Maths\tGuj\tEng\tsum\tpr\t\tgrade\n");
         for(i=0;i<5;i++)
         {  
                sum=arr[i]+arr1[i]+arr2[i];
		pr=(sum*100)/300;
                printf("%d\t%d\t%d\t%d\t%f\t",arr[i],arr1[i],arr2[i],sum,pr);
        	if(arr[i]<35 || arr1[i]<35 || arr2[i]<35)
		{
			printf("F");
		}
	 else if(pr>90)
                 {
                    	  printf("A");
                 }
	 else if(pr>80)
                 {
                    	  printf("B");
                 }
	else if(pr>70)
                 {
                   		   printf("C");
                 }
                 else if(pr>60)
                 {
                     	  printf("D");
                 }
	 else
                 {
                     	  printf("fail");
                 }
		printf("\n");
         }
}