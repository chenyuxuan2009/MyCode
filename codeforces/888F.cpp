#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
typedef long long ll;
const ll maxn = 5e2 + 5;
const ll mod = 1e9 + 7;
ll f[maxn][maxn][3], g[maxn][maxn];
ll n, a[maxn][maxn];
ll cal(ll l, ll r, ll num)
{
	if(f[l][r][num]!=-1)return f[l][r][num];
	if(l==r&&num==1)return 1;
	if(l==r&&num==2)return 0;
	f[l][r][num]=0;
	if(num==2)
	{
		for(int i=l+1;i<r;i++)
		{
			f[l][r][2]+=cal(l,i-1,1)*cal(i,r,1)%mod;
			f[l][r][2]%=mod;
		}
		return f[l][r][2];
	}
	for(int i=l+1;i<=r;i++)
	{
		if(!a[l][i])continue;
		f[l][r][1]+=(cal(l,i-1,1)+cal(l,i,2))*cal(i,r,1)%mod;
		f[l][r][1]%=mod;
	}
	return f[l][r][1];
}
int main()
{
	memset(f,-1,sizeof(f));
	scanf("%lld",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			scanf("%lld",&a[i][j]);
	printf("%lld\n", cal(1, n, 1));
	return 0;
}
