#include<stdio.h>
void display(int a[])
{
	int i,max=a[0],min=a[0];
	for (i = 1; i < 5; i++)
	{
        		 if (a[i] > max)
        		{
        		   	 max = a[i];
		}
		 if (a[i] < min)
       		 {
        	  		  min = a[i];
      	 	 }
	}
	printf("maximum number: %d ",max);
	printf("minimum number: %d ",min);
}
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
	
		printf("Enter value:");
		scanf("%d",&a[i]);
	}
	display(a);
}