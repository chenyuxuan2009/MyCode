#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<climits>
typedef long long ll;
using namespace std;
const int mod=998244353;
int f[200050];
int c[200050];
int p[200050];
int q[200050];
int g[200050]={2,1};
long long z=1;
int F(int x)
{
	return f[x]!=x?f[x]=F(f[x]):x;
}
void U(int x,int y)
{
	x=F(x);
	y=F(y);
	if(x==y)
	{
		return;
	}
	f[x]=y;
	c[y]+=c[x];
}
void solve()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		g[i]=(g[i-1]+g[i-2])%mod;
	}
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
		c[i]=1;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>p[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>q[i];
		U(p[i],q[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(f[i]==i)
		{
			z=z*g[c[i]]%mod;
		}
	}
	cout<<z<<endl;	
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
