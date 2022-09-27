#include<bits/stdc++.h>
using namespace std;
void solve()
{
	bool b[8005]={};
	int sum[8005]={};
	int n,cnt=0;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}	
	for(int i=0;i<=n;i++)
	{
		for(int j=i+2;j<=n;j++)
		{
			if(sum[j]-sum[i]<=n)b[sum[j]-sum[i]]=1;
			// printf("i:%d j:%d %d-%d:%d\n",i,j,sum[j],sum[i],sum[j]-sum[i]);
			// cout<<""sum[j]-sum[i]<<" ";
		}

	}
	for(int i=1;i<=n;i++)
	{
		cnt+=(b[a[i]]==1);
	}
	cout<<cnt<<endl;
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