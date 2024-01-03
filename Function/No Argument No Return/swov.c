#include<stdio.h>
int swap()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap value\n a:%d\nb:%d",a,b);
}	
int main()
{
	swap();
}
