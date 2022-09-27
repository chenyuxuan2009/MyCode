#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
vector<pair<int,string>>a;
bool cmp(pair<int,string>a,pair<int,string>b)
{
	return a.first>b.first;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int y;
		cin>>s>>y;
		a.push_back(make_pair(y,s));
	}
	sort(a.begin(),a.end(),cmp);
	cout<<a[1].second<<endl;
}

