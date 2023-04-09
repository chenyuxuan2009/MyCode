#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll p=1e9+7;
ll qpow(ll x,ll y)
{
	ll re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%p;
		x=x*x%p;
	}
	return re;
}
int main()
{
	ll n;
	cin>>n;
	cout<<qpow(2,n)<<endl;
	return 0;
}