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
	ll n;
	cin>>n;
  	for(ll i=1;i*i<n;i++)if(n%i==0)cout<<i<<endl;
  	for(ll i=(ll)sqrt(n);i>0;i--)if(n%i==0)cout<<n/i<<endl;
	return 0;
}

