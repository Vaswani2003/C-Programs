#include<stdio.h>
struct student 
{
	int rollno;
	char name[30];
	int marks[6];
};

float percentage(int *);
int main()
{
	int n,i,j;
	printf("Enter value for n \n");
	scanf("%d",&n);
	struct student s[n];
	{
		for(i=0;i<n;i++)
		{
		printf("\nEnter roll number and Name :");
		scanf("%d %[^\n]s",&s[i].rollno,s[i].name);
		printf("\nEnter marks : ");
		
		for(j=0;j<7;j++)
		{
			printf("\t");
			scanf("%d",&s[i].marks[j]);
		}	
		printf("\n%s",s[i].name);
		printf("\nPercentage Obtained : %f",percentage(s[i].marks));	
		}
		
		
	}
	return 0;
}

float percentage(int *x)
{
	int i,sum=0;
	for(i=0;i<=6;i++)
	{
		sum+=x[i];		
	}
	
	float xpercent= sum/6;
	
	return xpercent;
	
}
