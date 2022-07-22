#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter values :";
	int salary[9];
	int i,j,x;
	for(i=0;i<9;i++)
	{
		cin>>salary[i];
	}
	
	for(j=0;j<9;j++)
	{
		for(i=0;i<9;i++)
		{
			if(salary[i]>salary[i+1])
			{
				x=salary[i];
				salary[i]=salary[i+1];
				salary[i+1]=x;				
			}
		}
	}
	cout<<"Lowest salary is "<<salary[0];
	return 0;
}
