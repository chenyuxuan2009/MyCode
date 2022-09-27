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
ll a[100],b[100];
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for1(i,1,n,1)cin>>a[i];
		for1(i,1,n,1)cin>>b[i];
		ll ans=0,mina=1e15,minb=1e15;
		for1(i,1,n,1)
		{
			mina=min(mina,a[i]);
			minb=min(minb,b[i]);
		}
		for1(i,1,n,1)ans+=max(a[i]-mina,b[i]-minb);
		cout<<ans<<endl;
	}
	return 0;
}
