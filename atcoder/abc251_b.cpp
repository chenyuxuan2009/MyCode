#include<bits/stdc++.h>
using namespace std;
bool b[3000001];
int main()
{
	int n,w;
	long long ans=0;
	cin>>n>>w;
	int a[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		b[a[i]]=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			b[a[i]+a[j]]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			for(int k=j+1;k<=n;k++)
			{	
				b[a[i]+a[j]+a[k]]=1;
			}
		}
	}
	for(int i=1;i<=w;i++)
	{
		if(b[i]==1)ans++;
	}
	cout<<ans<<endl;
	return 0;
}