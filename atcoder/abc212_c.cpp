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
ll a[200000],b[200000];
int main()
{
	ll i=0,j=0,n,m,s=INT_MAX;
	cin>>n>>m;
	for(ll i=0;i<n;i++)cin>>a[i];
	for(ll i=0;i<m;i++)cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	while(i<n&&j<m)
	{
		s=min(s,abs(a[i]-b[j]));
		if(a[i]<b[j])i++;
		else j++;
	}
	cout<<s;
	return 0;
}

