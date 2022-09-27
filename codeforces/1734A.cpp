#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int ans=INT_MAX;
	for(int i=2;i<=n-1;i++)
	{
		int cur;
		cur=abs(a[i]-a[i-1])+abs(a[i]-a[i+1]);
		ans=min(ans,cur);
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