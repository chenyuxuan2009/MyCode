#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
vector<int> a[100005];
int v[100005];
void dfs(int x,int y)
{
	if(v[x])
	{
		puts("No");
		exit(0);
	}
	v[x]=1;
	for(int i:a[x])
	{
		if(i!=y)
		{
			dfs(i,x);
		}
	}
}
main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i].size()>2)
		{
			puts("No");
			exit(0);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(!v[i])
		{
			dfs(i,0);
		}
	}
	puts("Yes");
}


