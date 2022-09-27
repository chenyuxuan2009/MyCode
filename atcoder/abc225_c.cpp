#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
int a[10001][8];
main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if((j!=1&&a[i][j-1]!=a[i][j]-1)||(a[i][j]%7==1&&j!=1))
			{
				cout<<"No";
				return 0;
			}
		} 
	} 
	for(int j=1;j<=m;j++)
	{
		for(int i=1;i<=n;i++)
		{
			if(i!=1&&a[i-1][j]!=a[i][j]-7)
			{
				cout<<"No";
				return 0;
			}
		} 
	} 
	cout<<"Yes";
}

