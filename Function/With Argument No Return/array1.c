#include<stdio.h>
int array(int a,int b,int c)
{
	int P;
	P=a,b,c;
}
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
	array(arr[i],arr1[5],i);
}