#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,minn=INT_MAX;
	cin>>n;
	int a[n+1];
	int cnt[n+1]={};
	bool b[n+1]={};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int len=unique(a+1,a+n+1)-a-1;
	// for(int i=1;i<=len;i++)
	// {
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;
	for(int i=1;i<=len;i++)
	{
		cnt[a[i]]++;
		b[a[i]]=1;
	}
	cnt[a[1]]--;
	cnt[a[n]]--;
	// if(a[1]==a[n])cnt[a[1]]++;
	// sort(cnt+1,cnt+n+1);
	for(int i=1;i<=n;i++)
	{
		if(cnt[i]<minn&&b[i]==1)
		{
			minn=cnt[i];
		}
	}
	cout<<minn+1<<endl;
}
/*
3
1 1 1
1
cnt[1]=1;
cnt[1]--;
cnt[1]--;
*/
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