#include<stdio.h>
struct student
{
	int rollno;
	char name[50];
	int m,s,e,t;
};
int main()
{
	struct student a[2];
	int t;
	float percentage;
	for(int i=0;i<2;i++)
	{
		printf("Enter rollno.");
		scanf("%d",&a[i].rollno);
		printf("Enter name");
		scanf("%s",&a[i].name);
		printf("Enter maths marks");
		scanf("%d",&a[i].m);
		printf("Enter science marks");
		scanf("%d",&a[i].s);
		printf("Enter eng marks");
		scanf("%d",&a[i].e);
		printf("\n");
	}
	printf("rollno.\tname\tmaths\tscience\teng\ttotal\tpercentage");
	for(int i=0;i<2;i++)
	{
		t=a[i].m+a[i].s+a[i].s;
		percentage=(t*100)/300;
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,t,percentage);
	}
}