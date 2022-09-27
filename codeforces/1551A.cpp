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
int main()
{
	ll t;
	cin>>t;
	for(int tt=1;tt<=t;tt++)
	{
		ll n;
		cin>>n;
		if(n%3==0)cout<<n/3<<' '<<n/3<<'\n';
		if(n%3==1)cout<<n/3+1<<' '<<n/3<<'\n';
		if(n%3==2)cout<<n/3<<' '<<n/3+1<<'\n';
	}
	return 0;
}

