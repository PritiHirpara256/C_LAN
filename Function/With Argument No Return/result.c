#include<stdio.h>
int array(int a,int b,int c,int d,int e,int f,int g)
{
	int P;
	P=a,b,c,d,e,f,g;
}
int main()
{
	int arr[5],arr1[5],arr2[5],i,sum=0;
	float pr;
	char grade;
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
		printf("Enter a value:");
		scanf("%d",&arr2[i]);
		
	}
	printf("guj\teng\tmath\tsum\tpr\t\tgrade\n");
	for(i=0;i<5;i++)
	{
		sum=arr[i]+arr1[i]+arr2[i];
		pr=(sum*100)/300;
		printf("%d\t%d\t%d\t%d\t%f\t%c",arr[i],arr1[i],arr2[i],sum,pr,grade);
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
		printf("Fail");
		}
		printf("\n");
	}
	array(arr[i],arr1[i],arr2[i],i,sum,pr,grade);
}