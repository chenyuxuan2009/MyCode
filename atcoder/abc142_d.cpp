#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b,s=1;
ll gcd(ll x,ll y)
{
	return y?gcd(y,x%y):x;
}
int main()
{
	cin>>a>>b;
	ll g=gcd(a,b);
	for(ll i=2;i<=sqrt(g);i++)
	{
		if(g%i==0)
		{
			s++;
			while(g%i==0)g/=i;
		}
	}
	cout<<(g!=1?++s:s);
}
