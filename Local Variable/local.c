#include<stdio.h>
int display(int a,int b,int c,int d)
{
	printf("math: %d\nscience : %d\neng: %d\ntotal: %d",a,b,c,d);
}
int cal(int x,int y,int z)
{
	int p;
	p=x+y+z;
	display(x,y,z,p);
}
int setdata()
{
	int m,s,e,t;
	printf("Enter math marks:");
	scanf("%d",&m);
	printf("Enter science marks:");
	scanf("%d",&s);
	printf("Enter english marks:");
	scanf("%d",&e);
	cal(m,s,e); 
}
int main()			
{	
	setdata();
}