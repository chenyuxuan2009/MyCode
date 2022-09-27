#include<bits/stdc++.h>
using namespace std;
#define int long long
char x;
int c[150],n;
pair<string,string>p[50005];
string a(string x)
{
	string y=x;
	for(int i=0;i<x.size();i++)
	{
		y[i]=c[x[i]]+96;
	}
	return y;
}
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	for(int i=0;i<26;i++)
	{
		cin>>x;
		c[x]=i;
	}
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>p[i].second;
		p[i].first=a(p[i].second);
	}
	sort(p+1,p+n+1);
	for(int i=1;i<=n;i++)
	{
		cout<<p[i].second<<endl;
	}
	gt:;
}



