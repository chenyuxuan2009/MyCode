#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
const int p=998244353;
const ll N=1e5+5;
int f[2005][2005][2];
vector<int>a[2020];
void solve()
{
	int n,m,l,s,t,x;
	cin>>n>>m>>l>>s>>t>>x;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		a[v].push_back(u);
		a[u].push_back(v);
	}
	f[0][s][0]=1;
	for(int i=0;i<l;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int o=0;o<2;o++)
			{
				if(f[i][j][o]==0)continue;
				for(auto k:a[j])
				{
					int &g=f[i+1][k][o^(k==x)];
					g=(g+f[i][j][o])%p;
				}
			}
		}
	}
	cout<<f[l][t][0]<<endl;
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t=1;
	while(t--)
	{
		solve();
	}
    return 0;
}
