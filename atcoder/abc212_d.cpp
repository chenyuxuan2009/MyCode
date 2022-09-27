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
multiset<ll>s;
ll add;
int main()
{
	ll t;
	cin>>t;
	for(ll i=1;i<=t;i++)
	{
		int x;
		cin>>x;
		if (x==1)
		{
			long long y;
			cin>>y;
			s.insert(y-add);
		}
		else if (x==2)
		{
			long long y;
			cin>>y;
			add+=y;
		}
		else
		{
			long long y=*s.begin()+add;
			s.erase(s.begin());
			cout<<y<<endl;
		}

	}
	return 0;
}

