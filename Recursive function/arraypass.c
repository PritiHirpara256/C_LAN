#include<stdio.h>
void display(int a[])
{
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
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