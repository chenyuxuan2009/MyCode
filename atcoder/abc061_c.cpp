#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<pair<ll,ll>>v;
int main()
{
	ll n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<(int)v.size();i++)
	{
		k-=v[i].second;
		if(k<=0){cout<<v[i].first<<endl;return 0;}
	}
	return 0;
}