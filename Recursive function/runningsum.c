#include<stdio.h>
void display(int a[])
{
	int sum=0;
	for(int i=0;i<5;i++)
	{	
		sum+=a[i];
		printf("\n%d  ",a[i]);
		if(i==0)
		{
			printf("  ");
		}
		else
		{
			printf("%d ",sum);	
		}
		sum=a[i];
	}
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










