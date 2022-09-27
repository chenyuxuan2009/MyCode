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
	int n,xq[1000009],i;
	long long zs=1;
	cin>>n;
	for(i=1;i<=n;i++)cin>>xq[i];
	sort(xq+1,xq+n+1);
	for(i=1;i<=n;i++)zs*=(xq[i]-i+1),zs%=1000000007;
	if(zs<=0)cout<<0;
	else cout<<zs;
	return 0;
}

