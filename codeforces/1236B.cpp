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
ll p=1e9+7;
ll Qmi(ll x,ll y)
{
	int ans=1;
	for(;y;y>>=1,x=1ll*x*x%p)if(y&1)ans=1ll*ans*x%p;
	return ans;
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<Qmi(Qmi(2,m)-1,n);
	return 0;
}

