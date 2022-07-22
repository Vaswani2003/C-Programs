#include<stdio.h>
struct employee
{
	char name[30];
	int salary;
};

int main()
{
	int temp,i,j,n;
	printf("Enter value for n\n");
	scanf("%d",&n);
	
	struct employee em[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter name");
		scanf("%[^\n]s",&em[i].name);
		printf("\nEnter salary");
		scanf("%d",&em[i].salary);
	}
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(em[j].salary>em[j+1].salary)
			{
				temp=em[j].salary;
				em[j].salary=em[j+1].salary;
				em[j+1].salary=temp;
			}
		}
	}
	
	printf("Lowest salary : ",em[0].salary);
	return 0;
}
