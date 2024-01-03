#include<stdio.h>
int vowel()
{
	char A,B,C;
	printf("Enter char:");
	scanf("%c",&C);
	A=(C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u');
	B=(C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U');
	if(A || B)
	{
	printf("this is vowel %c",C);
	}
	else
	{
	printf("this is consonant %c",C);
	}
	return C;
}
int main()
{
	int P,A,B,C;
	P=vowel();
}