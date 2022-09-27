#include<bits/stdc++.h>
using namespace std;
long long a[10*10*10*10*10+1];
long long dp[10*10*10*10*10+1];
long long cnt[10*10*10*10*10+1];
int main()
{
	long long n,maxx=-1;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
		maxx=max(maxx,a[i]);
		cnt[a[i]]++;
	}
	dp[1]=cnt[1];
	for(int i=2;i<=maxx;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+cnt[i]*i);
	}
	cout<<dp[maxx]<<endl;
	return 0;
}
