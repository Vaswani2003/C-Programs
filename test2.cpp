#include<stdio.h>
struct employee
{
	char name[22];
	int sal;
};

int main()
{
int i,j,n,k;

printf("Enter value of n\n");
scanf("%d",&n);

struct employee ep[n];
{
for (i=0;i<n;i++)
{
	printf("Enter name\n");
	scanf("%s",ep[i].name);
	printf("\nEnter Salary ");
	scanf("%d",&ep[i].sal);
}


for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(ep[j].sal<ep[j].sal)
		{
			k=ep[j].sal;
			ep[j].sal=ep[j+1].sal;
			ep[j+1].sal=k;
		}
	}
}

}
printf("%d is the lowest salary",ep[0].sal);
return 0;
}
