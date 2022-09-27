#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
int f[1020][1020]; 
char c[1020][1020];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>c[i][j];
		}
	}
	f[0][1]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(c[i][j]=='#')continue;
			f[i][j]=f[i-1][j]+f[i][j-1];
			f[i][j]%=mod;
		}
	}
	cout<<f[n][m]<<endl;
	return 0;
}
