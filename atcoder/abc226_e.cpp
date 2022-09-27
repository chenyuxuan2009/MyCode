#include<bits/stdc++.h>
using namespace std;
int f[200020],c[200020];
long long z=1;
const int p=998244353;
int F(int x)
{
	return f[x]!=x?f[x]=F(f[x]):x;
}
int n,m,x,y;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
		c[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		x=F(x);
		y=F(y);
		if(x!=y)
		{
			f[x]=y;
			c[y]+=c[x];
		}
		else
		{
			c[x]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(f[i]==i)
		{
			if(c[i]==1)
				z=z*2%p;
			else
				z=0;
		}
	}
	cout<<z;
	return 0;
}
