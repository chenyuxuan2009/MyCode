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
void solve() {
  ll n;
  cin>>n;
  if(n&(n-1))cout<<"YES\n";
  else cout<<"NO\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
	return 0;
}

