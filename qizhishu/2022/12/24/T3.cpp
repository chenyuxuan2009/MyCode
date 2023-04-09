#include<bits/stdc++.h>
using namespace std;
void solve()
{	
	int n;
	cin>>n;
	int a[n+1];
	bool f[1001]={};
	int id[n+1]={};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[a[i]]=1;
		id[a[i]]=i;
	}
	int ans=-1;
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<=1000;j++)
		{
			if(__gcd(i,j)==1&&f[i]&&f[j])
			{
				ans=max(ans,id[i]+id[j]);
			}
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