#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	string s="";
	for(int i=1;i<=m;i++)s+='B';
	int a[n+1];
	m--;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		x--;
		x=min(x,m-x);
		if(s[x]=='A')s[m-x]='A';
		else s[x]='A';
	}
	cout<<s<<endl;
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