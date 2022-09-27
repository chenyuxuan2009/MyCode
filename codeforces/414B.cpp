#include<bits/stdc++.h>
using namespace std;
int f[2020][2020];
const int mod=1e9+7;
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		f[i][1]=1;
	}
	for(int j=2;j<=k;j++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int _=1;_*i<=n;_++)
			{
				f[i*_][j]+=f[i][j-1];
				f[i*_][j]%=mod;
			}
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=f[i][k];
		ans%=mod;
	}
	cout<<ans<<endl;
	return 0;
}

