#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m,minn=INT_MAX,cnt=0;
	cin>>n>>m;
	int a[n+5][m+5];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char c;
			cin>>c;
			a[i][j]=c-'0';
			cnt+=a[i][j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j+1<=m&&i+1<=n&&a[i][j+1]+a[i+1][j+1]!=0)minn=min(minn,a[i][j]+a[i][j+1]+a[i+1][j+1]);
			if(j+1<=m&&i+1<=n&&a[i+1][j]+a[i+1][j+1]!=0)minn=min(minn,a[i][j]+a[i+1][j]+a[i+1][j+1]);
			if(j-1>=1&&i+1<=n&&a[i+1][j]+a[i+1][j-1]!=0)minn=min(minn,a[i][j]+a[i+1][j]+a[i+1][j-1]);
			if(j-1>=1&&i+1<=n&&a[i][j-1]+a[i+1][j-1]!=0)minn=min(minn,a[i][j]+a[i][j-1]+a[i+1][j-1]);
			if(j-1>=1&&i-1>=1&&a[i][j-1]+a[i-1][j-1]!=0)minn=min(minn,a[i][j]+a[i][j-1]+a[i-1][j-1]);
			if(j-1>=1&&i-1>=1&&a[i-1][j]+a[i-1][j-1]!=0)minn=min(minn,a[i][j]+a[i-1][j]+a[i-1][j-1]);
			if(j+1<=m&&i-1>=1&&a[i-1][j]+a[i-1][j+1]!=0)minn=min(minn,a[i][j]+a[i-1][j]+a[i-1][j+1]);
			if(j+1<=m&&i-1>=1&&a[i][j+1]+a[i-1][j+1]!=0)minn=min(minn,a[i][j]+a[i][j+1]+a[i-1][j+1]);
		}
	}
	cout<<(cnt==0?0:1+cnt-minn)<<endl;
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

