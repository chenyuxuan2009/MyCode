#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	string s,ans="";
	cin>>n>>s;
	if(n==1)cout<<s<<s<<endl;
	else if(s[0]==s[1])cout<<s[0]<<s[0]<<endl;
	else
	{
		for(int i=0;i<n;i++)
		{
			ans+=s[i];
			if(i==n-1||s[i]<s[i+1])
			{
				cout<<ans;
				reverse(ans.begin(),ans.end());
				cout<<ans<<endl;
				return;
			}
		}
	}
	
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
