#include<stdio.h>
int swap()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("after swap value\n a:%d\nb:%d",a,b);
}	
int main()
{
	swap();
}