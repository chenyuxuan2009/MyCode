#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
	int n,ans=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		if(i!=n-1&&s[i]+s[i+1]=='0'+'0')
		{
			ans+=2;
		}
		if(i<n-2&&s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
		{
			ans++;
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