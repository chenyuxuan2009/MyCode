#include<bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
	int n,ans=0;
	cin>>n;
	string s,st="";
	cin>>s;
	s='+'+s;
	for(int i=0;i<=n;i++)st+='1';
	for(int i=1;i<=n;i++)
	{
		int j=i;
		while(j<=n)
		{
			if(s[j]=='0')
			{
				if(st[j]=='1')
				{
					ans+=i;
					st[j]='0';
				}
				else j+=i;
			}
			else break;
			
		}
	}
	cout<<ans<<endl;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}