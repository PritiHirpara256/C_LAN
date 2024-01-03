#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("abc.txt","w+");
	fprintf(fp,"my name is PRITI..\n");	
	fputs("i am 18 year old..\n",fp);
	fclose(fp);
}