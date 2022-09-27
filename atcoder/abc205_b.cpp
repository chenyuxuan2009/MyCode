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
ll a[1005];
int main()
{
	ll n;
	cin>>n;
	for1(i,1,n,1)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for1(i,2,n,1)
	{
		if(a[i]-a[i-1]!=1)
		{
			puts("No");
			return 0;
		}
	}
	puts("Yes");
	return 0;
}

