#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m;
	cin>>n>>m;
	int a[n+1],x[m+1],y[m+1],s[n+1]={},mi[n+1];
	memset(mi,0x3f,sizeof(mi));
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x[i]>>y[i];
		s[x[i]]++;
		s[y[i]]++;
		mi[x[i]]=min(mi[x[i]],a[y[i]]);
		mi[y[i]]=min(mi[y[i]],a[x[i]]);
	}
	if(m%2==0)
	{
		cout<<0<<endl;
		return;
	}
	int minn=INT_MAX;
	for(int i=1;i<=m;i++)
	{
		if(s[x[i]]%2==1)
		{
			minn=min(minn,a[x[i]]);
		}
		else
		{
			minn=min(minn,a[x[i]]+mi[x[i]]);
		}
		if(s[y[i]]%2==1)
		{
			minn=min(minn,a[y[i]]);
		}
		else
		{
			minn=min(minn,a[y[i]]+mi[y[i]]);
		}
	}
	cout<<minn<<endl;
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
