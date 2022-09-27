#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
ll mod=1e9+7;
ll apow(ll a,ll b,ll p=mod)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%p;
		a=a*a%p,b>>=1;
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<(apow(10,n)-2LL*apow(9,n)+apow(8,n)+mod*2)%mod;
	return 0;
}
