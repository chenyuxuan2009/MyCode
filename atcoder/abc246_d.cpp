#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll X(ll a,ll b)
{
	return a*a*a+a*a*b+a*b*b+b*b*b;
}
void solve()
{
	ll n,minn=1e18;
	cin>>n;
	ll a=0,b=1000000;
	while(a<=b)
	{
		ll x=X(a,b);
		if(x>=n)b--;
		else a++;
		if(x>=n&&x<minn)minn=x;
	}
	cout<<minn<<endl;
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