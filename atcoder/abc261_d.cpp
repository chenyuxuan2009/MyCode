#include<bits/stdc++.h>
using namespace std;
int a[5020];
int b[5020];
long long f[5020][5020];
int main()
{
	int n,m;
	long long ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		b[x]=y;
	}
	f[1][1]=a[1]+b[1];
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			f[i][j]=f[i-1][j-1]+b[j]+a[i];
			f[i][0]=max(f[i][0],f[i-1][j]);
		}
		f[i][i]=f[i-1][i-1]+a[i]+b[i];
		// for(int j=0;j<=i;j++)
		// {
		// 	cout<<f[i][j]<<" ";
		// }
		// cout<<endl;
	}
	for(int i=0;i<=n;i++)ans=max(ans,f[n][i]);
	cout<<ans<<endl;
	return 0;
}