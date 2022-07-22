#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter n value "<<"\n";
	cin>>n;
	
	int a[n][n];
	int b[n][n];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	
	int c[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{			
				c[i][j] +=a[i][k]*b[k][j];
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}


int xcount(char *x)
{
	int vowel=0;

	while ( *x != '\0' )
	{
		if(*x == 'a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
		{
			vowel++;
			x++;
		}
	}
	return vowel;
}
