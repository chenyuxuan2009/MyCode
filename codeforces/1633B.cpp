#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;
	cin>>s;
	int cnt0=0,cnt1=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1')cnt1++;
		else cnt0++;
	}
	if(cnt0==cnt1)cout<<cnt0-1<<endl;
	else cout<<min(cnt0,cnt1)<<endl;
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
