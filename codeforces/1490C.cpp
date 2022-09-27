#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
set<ll>s;
void init()
{
	for(ll i=1;i*i*i<=1000000000000;i++)
	{
		s.insert(i*i*i);
	}
}
void solve()
{
	ll x;
	bool f=0;
	cin>>x;
	for(ll i:s)
	{
		if(s.count(x-i))
		{
			f=1;
		}
	}
	puts(f==1?"YES":"NO");
}
int main()
{
	init();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}