//upper triangle matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j,b[3][3];
	cout<<"Enter matrix values\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	b[i][j]=0;
			if(a[i][j]<=a[j][i])
			{
				b[i][j]=a[j][i];				
			}
		}
		
	}	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j];
		}
		cout<<"\n";
	}
}
