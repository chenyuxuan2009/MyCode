#include<bits/stdc++.h>
using namespace std;
long long f[300005],g[300005],a[300005];
int main()
{
	int n;
	cin>>n;
	long long s=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	}
	f[1]=a[1];
	for(int i=2;i<n;i++)
	{
		f[i]=max(f[i-1],f[i-2]+a[i]);
	}
	// for(int i=2;i<=n-2;i++)
	// {
	// 	dp[i]=min(dp[i-1],dp[i-2])+a[i];
	// }
	for(int i=2;i<=n-2;i++)
	{
		g[i]=max(g[i-1],g[i-2]+a[i]);
	}
	cout<<s-max(f[n-1],g[n-2]+a[n])<<endl; 
	return 0;
}