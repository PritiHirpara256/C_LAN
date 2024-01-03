#include<stdio.h>
int lowerupper()
{
	char a;
	printf("Enter char:");
	scanf("%c",&a);
	if(a>=65 && a<=90)
	{
	a=a+32;
	printf("lowercase character: %c",a);
	}
	else
	{
	a=a-32;
	printf("uppercase character: %c",a);
	}
	return a;
}
int main()
{
	int P,a;
	P=lowerupper();
}