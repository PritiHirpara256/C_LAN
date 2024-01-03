#include<stdio.h>
int main()
{
	char str[50],a[50];
	printf("Enter a value:");
	scanf("%s",&str);
	int i=0,len=0,k;
	while(str[len] != '\0'){
	len++;
	}
	k = len-1;
	while(i<len){
		a[i++] = str[k--];
	}
	a[len] = '\0';
	printf("Reverse a value: %s",a);
}