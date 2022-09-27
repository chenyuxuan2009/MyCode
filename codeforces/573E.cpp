#include<iostream>
using namespace std;
#define ll long long
const ll N=-18e16;
ll dp[100005],ans;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)dp[i]=N;
	for(int i=1;i<=n;i++)
	{
		ll x;
		cin>>x;
		for(int j=i;j>=1;j--)
		{
			dp[j]=max(dp[j],dp[j-1]+j*x); 
		}
	}
	for(int i=1;i<=n;i++)ans=max(ans,dp[i]);
	cout<<ans<<endl;
    return 0;
}
