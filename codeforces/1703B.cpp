#include<bits/stdc++.h>
using namespace std;
int a[30];
void solve()
{
	memset(a,0,sizeof(a));
	int n,ans=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		a[s[i]-'A']++;
	}
	for(int i=0;i<26;i++)
	{
		if(a[i]>=1)
		{
			ans+=a[i]+1;
		}
	}
	cout<<ans<<endl;
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