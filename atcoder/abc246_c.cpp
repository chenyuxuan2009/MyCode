#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	ll n,k,x,sum=0;
	cin>>n>>k>>x;
	ll a[n+1];
	for(int i=1;i<=n;i++)
	{	
		cin>>a[i];
		ll xx=a[i];
		if(k>0)
		{
			if(a[i]/x<=k)a[i]%=x;
			else a[i]-=k*x;
			k-=(xx-a[i])/x;
		}	
		sum+=a[i];
	}
	if(k>0)
	{
		sort(a+1,a+n+1);
		for(ll i=n;i>=max(n-k+1,1LL);i--)
		{
			sum-=a[i];
			a[i]=0;
		}
	}
	cout<<sum<<endl;
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