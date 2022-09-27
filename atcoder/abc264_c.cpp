#include<bits/stdc++.h>
using namespace std;
int a[20][20];
int b[20][20];
int c[20];
int h1,w1,h2,w2;
bool check()
{
	bool f=0;
	for(int i=1;i<=h1;i++)
	{
		for(int j=1;j<=w2;j++)
		{
			f=1;
			for(int i1=1;i1<=h2;i1++)
			{
				for(int j1=1;j1<=w2;j1++)
				{
					if(a[i+i1-1][j+j1-1]!=b[i1][j1]){f=0;goto flag;}
				}
			}
			flag:
			if(f)return 1;
		}
	}
	return 0;
}
int main()
{
	cin>>h1>>w1;
	for(int i=1;i<=h1;i++)
	{
		for(int j=1;j<=w1;j++)
		{
			cin>>a[i][j];
		}	
	}
	cin>>h2>>w2;
	for(int i=1;i<=h2;i++)
	{
		for(int j=1;j<=w2;j++)
		{
			cin>>b[i][j];
		}	
	}
	for(int i=1;i<=w1;i++)
	{
		for(int k=1;k<=w1;k++)
		{
			c[k]=a[i][k];
		}
		for(int j=i;j<=h1;j++)
		{
			for(int k=1;k<=w1;k++)
			{
				a[j][k]=a[j+1][k];
			}
		}
		h1--;
		for(int i=1;i<=h1;i++)
		{
			for(int j=1;j<=w1;j++)
			{
				cout<<a[i][j]<<" ";
			}	
			cout<<endl;
		}
		if(check())
		{
			puts("Yes");
			return 0;
		}
		h1++;
		for(int j=h1;j>=i;j--)
		{
			for(int k=1;k<=w1;k++)
			{
				a[j][k]=a[j-1][k];
			}
		}
		for(int k=1;k<=w1;k++)
		{
			a[i][k]=c[k];
		}
	}
	for(int i=1;i<=h1;i++)
	{
		for(int k=1;k<=h1;k++)
		{
			c[k]=a[k][i];
		}
		for(int j=i;j<=w1;j++)
		{
			for(int k=1;k<=h1;k++)
			{
				a[k][j]=a[k][j+1];
			}
		}
		w1--;
		for(int i=1;i<=h1;i++)
		{
			for(int j=1;j<=w1;j++)
			{
				cout<<a[i][j]<<" ";
			}	
			cout<<endl;
		}
		if(check())
		{
			puts("Yes");
			return 0;
		}
		w1++;
		for(int j=w1;j>=i;j--)
		{
			for(int k=1;k<=h1;k++)
			{
				a[k][j]=a[k][j-1];
			}
		}
		for(int k=1;k<=h1;k++)
		{
			a[k][i]=c[k];
		}
	}
	puts("No");
	return 0;
}

