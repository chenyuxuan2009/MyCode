#include<bits/stdc++.h>
using namespace std;
void solve()
{	
	vector<int>ans;
	int n,maxx=-1,id;
	cin>>n;
	int a[n+1];
	int tmp[n+1];
	bool f[n+1]={};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		tmp[i]=a[i];
		if(a[i]>maxx)
		{
			maxx=a[i];
			id=i;
		}
	}
	f[id]=1;
	ans.push_back(maxx);
	int last=maxx;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			tmp[j]|=maxx;
		}
		last=maxx;
		maxx=0;
		for(int j=1;j<=n;j++)
		{
			if(!f[j])
			{
				if(tmp[j]>maxx)
				{
					maxx=tmp[j];
					id=j;
				}
			}
		}
		f[id]=1;
		ans.push_back(a[id]);
		if(maxx==last)
		{
			for(int j=1;j<=n;j++)
			{
				if(!f[j])
				{
					ans.push_back(a[j]);
				}
			}
			break;
		}
	}
	for(int i:ans)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		solve();
	}
	return 0;
}