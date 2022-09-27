#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	string s[n+1];
	map<string,bool>mp;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		mp[s[i]]=1;
	}
	for(int i=1;i<=n;i++)
	{
		bool f=0;
		for(int j=0;j<s[i].size();j++)
		{
			string st1,st2;
			st1=s[i].substr(0,j);
			st2=s[i].substr(j);
			if(mp[st1]==1&&mp[st2]==1)
			{
				cout<<1;
				f=1;
				break;
			}
		}
		if(f==0)cout<<f;
	}
	cout<<endl;
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