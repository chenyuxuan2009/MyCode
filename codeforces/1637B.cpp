#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++) 
	{
	    ans+=(i+1)*(n-i);
	    if(a[i]==0)ans+=(i+1)*(n-i);
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
