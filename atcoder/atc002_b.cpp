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
ll number(ll x,ll y,ll p)
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
	ll a,b,p;
	cin>>a>>p>>b;
	cout<<number(a,b,p)<<endl; 
	return 0;
}