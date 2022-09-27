#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<pair<int,string>> v[10020]; 
main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		string s;
		int x,y;
		cin>>s>>x>>y;
		v[x].push_back(make_pair(-y,s));
	}
	for(int i=1;i<=m;i++)
	{
		sort(v[i].begin(),v[i].end());
		if(v[i].size()>2&&v[i][1].first==v[i][2].first)cout<<"?\n";
		else cout<<v[i][0].second<<" "<<v[i][1].second<<endl;
	}
}

