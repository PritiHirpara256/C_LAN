#include<stdio.h>
int xy()
{
	int x,y;
	printf("Enter X");
	scanf("%d",&x);
	printf("Enter Y");
	scanf("%d",&y);
	if((x<2000) || (x>3000))
	{
	printf("this is X value: %d",x);
	}
	else
	{
	printf("sorry don't print value:"); 
	}
	if((y>100) || (y<500))
	{
	printf("value of Y is: %d",y);
	}
	else
	{
	printf("sorry don't print value:"); 
	}
	return x;
}
int main()
{
	int P,x,y;
	P=xy();
}