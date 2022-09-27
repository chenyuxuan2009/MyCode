#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	vector<int>v[n+1];
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		v[a[i]].push_back(i);
	}
	if(is_sorted(a+1,a+n+1)){cout<<0<<endl;return;}
	int id=n;
	for(int i=1;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			id=i+1;
		}
	}
	for(int i=1;i<id;i++)
	{
		for(int j=0;j<v[a[i]].size();j++)
		{
			if(v[a[i]][j]>=id)
			{
				id=v[a[i]][j]+1;
			}
		}
	}
	set<int>s;
	s.clear();
	for(int i=1;i<id;i++)
	{
		s.insert(a[i]);
	}
	cout<<s.size()<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();	
	} 
	return 0;
}

