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
	while(t--)
	{
		ll n,s=0;
		cin>>n;
		for(ll i=1;i<=n;i=i*10+1)
			for(ll j=1;j<=9;j++)
				if(n>=i*j)s++;
					else break;
		cout<<s<<endl;
	}
	return 0;
}

