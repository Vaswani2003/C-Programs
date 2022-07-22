
//upper triangle matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	cout<<"Enter matrix values\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	int b[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		if(a[i][j]==a[j][i])
		{
			a[i][j]=b[i][j];
		}
		else 
		{
			a[i][j]=b[j][i];
			a[j][i]=b[i][j];
		}
		}
		
		}
			
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
