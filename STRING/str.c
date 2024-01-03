#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter a value:");
	scanf("%s",&str);
	printf("\nyour string is: %s",str);
	int len=0;
	while(str[len] != '\0'){
	len++;
	}
	printf("\n your string is: %d",len);
}