#include<bits/stdc++.h>
using namespace std;
vector<int> a[200020];
long long t[200020],m,vis[200020],ans=0;
int n;
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t[i]>>m;
		a[i].resize(m);
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	vis[n]=1;
	for(int i=n;i>0;i--)
	{
		if(vis[i]==1)
		{
			ans+=t[i];
			for(int j:a[i])
			{
				vis[j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
