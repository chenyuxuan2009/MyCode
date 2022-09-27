#include<bits/stdc++.h>
using namespace std;
#define int long long
string s1,s2,s3,t,ans;
signed main()
{
	std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>s1>>s2>>s3;
	cin>>t;
	for(int i=0;i<t.size();i++)
	{
		if(t[i]=='1')ans=ans+s1;
		if(t[i]=='2')ans=ans+s2;
		if(t[i]=='3')ans=ans+s3;
	}
	cout<<ans;
	gt:;
}



