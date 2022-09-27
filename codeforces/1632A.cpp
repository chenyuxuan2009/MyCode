#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,sum=0;
	string s;
	cin>>n>>s;	
	for(int i=0;i<n;i++)
	{
		sum+=(s[i]=='1');
	}
	puts(sum>=2||n-sum>=2?"NO":"YES");
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
