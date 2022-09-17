#include<bits/stdc++.h>
using namespace std;
map<int,int>mp; 
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		mp[x]++;
		mp[y]--;
	}
	int ans=0,now=0; 
	for(map<int,int>:: iterator it=mp.begin();it!=mp.end();it++)
	{
		ans=max(now,ans);
		now+=it->second;
	}
	cout<<ans<<endl;
	return 0;
}