#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
char c[705][705];
void f(int i,int j)
{
	if(c[i][j+1]!='1'&&c[i][j-1]!='1'&&c[i+1][j]!='1'&&c[i-1][j]!='1')
	{
		c[i][j]='1';
		return;
	}
		
	if(c[i][j+1]!='2'&&c[i][j-1]!='2'&&c[i+1][j]!='2'&&c[i-1][j]!='2')
	{
		c[i][j]='2';
		return;
	}
		
	if(c[i][j+1]!='3'&&c[i][j-1]!='3'&&c[i+1][j]!='3'&&c[i-1][j]!='3')
	{
		c[i][j]='3';
		return;
	}
		
	if(c[i][j+1]!='4'&&c[i][j-1]!='4'&&c[i+1][j]!='4'&&c[i-1][j]!='4')
	{
		c[i][j]='4';
		return;
	}
		
	if(c[i][j+1]!='5'&&c[i][j-1]!='5'&&c[i+1][j]!='5'&&c[i-1][j]!='5')
	{
		c[i][j]='5';
		return;
	}
		
}
main()
{
	int h,w;
	cin>>h>>w;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			cin>>c[i][j];
		}
	}
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			if(c[i][j]=='.')
			{
//				if(c[i][j+1]==c[i][j]||c[i][j-1]==c[i][j]||c[i+1][j]==c[i][j]||c[i-1][j]==c[i][j])
//				{
//					c[i][j]+=1;
//				}
				f(i,j);
			}
		}
	}
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			cout<<c[i][j];
		}
		cout<<endl;
	}
}


