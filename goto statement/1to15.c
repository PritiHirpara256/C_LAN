#include<stdio.h>
int main()
{
	int i=1;
	text:
	if(i<=15)
	{
		printf("%d ",i);
		i++;
		goto text;
	}
}