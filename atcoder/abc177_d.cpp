#include<bits/stdc++.h>
using namespace std;
int f[200020];
int F(int x)
{
	return f[x]!=x?f[x]=F(f[x]):x;
}
int c[200020];
int n,m,x,y,z;
main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
		c[i]=1;
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
	}
	for(int i=1;i<=n;i++)
	{
		z=max(z,c[F(i)]);
	}
	cout<<z;
}

