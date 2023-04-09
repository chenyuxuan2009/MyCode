
#include<bits/stdc++.h>
using namespace std;
const int p=1000000007;
long long a[1000020];
long long b[1000020];
int main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)a[i]=1;
	for(int i=1;i<=m;i++)b[i]=1;
	while(k--)
	{
		char c;
		int x;
		long long y;
		cin>>c;
		scanf("%d%lld",&x,&y);
		if(c=='R')a[x]*=y;
		else b[x]*=y;
		a[x]%=p;
		b[x]%=p;
	}
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			long long z=(i-1)*m+j;
			z%=p;
			z*=a[i];
			z%=p;
			z*=b[j];
			z%=p;
			ans+=z;
			ans%=p;
		}
	}
	cout<<ans<<endl;
	return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
const int p=1000000007;
long long a[1000020];
long long b[1000020];
int n,m,k;
long long get(long long i,long long j)
{
	return (i-1)*m+j;
}
int main()
{
	
	scanf("%d%d%d",&n,&m,&k);
	for(int i=1;i<=n;i++)a[i]=1;
	for(int i=1;i<=n;i++)b[i]=(get(i,1)+get(i,m))*m/2;
	while(k--)
	{
		char c;
		int x;
		long long y;
		cin>>c;
		scanf("%d%lld",&x,&y);
		if(c=='R')a[x]*=y;
		else 
		{
			for(int i=1;i<=n;i++)
			{
				b[i]-=get(i,x);
				b[i]+=get(i,x)*y;
				// cout<<b[i]<<endl;
				b[i]=b[i]*a[i];
				b[i]%=p;
				a[i]=1;
			}
		}
		a[x]%=p;
	}
	long long ans=0;
	for(int i=1;i<=n;i++)
	{
		// cout<<a[i]*b[i]<<endl;
		ans+=a[i]*b[i];
		ans%=p;
	}
	cout<<ans<<endl;
	return 0;
}*/