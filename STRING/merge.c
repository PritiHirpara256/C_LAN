#include <stdio.h>
int main()
{
  	char Str[50],Str1[50];
  	int i, j;
  	printf("\nEnter the First String :  ");
  	gets(Str);
  	printf("\nEnter the Second String :  ");
  	gets(Str1);
 	i = 0;
	while( Str[i]!='\0')
	{
		i++;
	}
	j = 0;
  	while( Str1[j]!='\0')
  	{
  		Str[i] = Str1[j];
  		i++;
  		j++;
  	}
  	Str[i] = '\0';
	printf("\n merge String= %s",Str);
}