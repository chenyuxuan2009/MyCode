#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll z;
ll n,f;
const ll mod=998244353;
ll dight(ll n)
{
	ll c=0;
	while(n!=0)
	{
		c++;
		n/=10;
	}
	return c;
}
ll p[19];
int main()
{
	cin>>n;	
	for(ll i=0;i<=18;i++)p[i]=pow(10,i);
	for(ll i=0;i<=17;i++)
	{
		if(p[i]<=n&&p[i+1]>n)
		{
			z+=(((1+n-p[i]+1)%mod)*((n-p[i]+1)%mod))/2%mod;
			f=1;
			break;
		}
		else z=z+(((p[i+1]-p[i])%mod)*((1+p[i+1]-p[i])%mod))/2%mod;
		z%=mod;
	}
	if(f==0)
	{
		z+=((1+n-p[18]+1)%mod*(n-p[18]+1)/2%mod)%mod;
	}
	cout<<z%mod<<endl;
	return 0;
}
