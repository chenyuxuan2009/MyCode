#include<bits/stdc++.h>
#define int long long
using namespace std;
const int mod=998244353;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>n>>x>>y;
		int minn=INT_MAX,maxx=INT_MIN;
		bool f[n+1];
		int a[n+1];
		a[1]=x;
		a[n]=y;
		f[x]=1;
		f[y]=1;
		int s=2;
		for(int i=n;i>=1;i--)
		{
			if(i!=x&&i!=y)
			{
				a[s++]=i;
			}
		}
		for(int i=1;i<=n;i++)
		{
			if(i<=n/2)
				minn=min(minn,a[i]);
			else
				maxx=max(maxx,a[i]); 
		}
		if(minn==x&&maxx==y)
		{
			for(int i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl; 
		}
		else
		{
			puts("-1");
		}
	} 
}


