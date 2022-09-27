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
	int n,k;
	cin>>n>>k;
	vector<pair<long,long>>x(n);
	for(int i=0;i<n;i++)
	{
		long a,b;
		cin>>a>>b;
		x[i]={a,b};
	}
	sort(x.begin(),x.end());
	long s=k;
	for(auto i:x)
	{
		if(s<i.first) break;
		s+=i.second;
	}
	cout<<s<<endl;
	return 0;
}

