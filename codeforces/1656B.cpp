#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<set>
typedef long long ll;
using namespace std;
const int mod=998244353;
const ll N=1e5+5;
void solve()
{
	set<ll>s;
	s.clear();
	ll n,k;cin>>n>>k;
	bool f=0;
	for(int i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		s.insert(x);
		if(s.count(x-k)||s.count(x+k))
		{
			f=1;
		}
	}
	puts(f==1?"YES":"NO");
}
int main()
{
//	freopen("example.in","r",stdin);
//	freopen("example.out","w",stdout);
//	std::ios::sync_with_stdio(false);
//	cin.tie(nullptr);cout.tie(nullptr);
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}