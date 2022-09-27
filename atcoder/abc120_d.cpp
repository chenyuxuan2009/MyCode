#include<bits/stdc++.h>
using namespace std;
const int g=1e5+20;
int f[g];
int F(int x)
{
	return f[x]!=x?f[x]=F(f[x]):x;
}
int c[g];
int x[g];
int y[g];
long long z[g];
int n,m;
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
		cin>>x[i]>>y[i];
	}
	for(int i=m-1;i>=0;i--)
	{
		z[i]=z[i+1];
		x[i]=F(x[i]);
		y[i]=F(y[i]);
		if(x[i]!=y[i])
		{
			f[x[i]]=y[i];
			z[i]+=(long long)c[x[i]]*c[y[i]];
			c[y[i]]+=c[x[i]];
		}
	}
	for(int i=1;i<=m;i++)cout<<z[0]-z[i]<<endl;
}

