#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
int f[60];
int F(int x)
{
	return f[x]!=x?f[x]=F(f[x]):x;
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		f[i]=i;
	}
	long long z=1;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		x=F(x);
		y=F(y);
		if(x!=y)
		{
			f[x]=y;
			z*=2;
		}
	}
	cout<<z<<endl;
	return 0;
}

