#include<stdio.h>
int main()
{
	int a=20,b=6,ch;
	printf("1.Add\n");
	printf("2.substract\n");
	printf("3.multiply\n");
	printf("4.division\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		printf("Addition: %d\n",a+b);
		break;
	case 2:
		printf("substraction: %d\n",a-b);
		break;
	case 3:
		printf("multiplication: %d\n",a*b);
		break;
	case 4:
		printf("division: %d\n",b/a);
		break;
	default:
		printf("wrong choice...");
		break;
	}
}