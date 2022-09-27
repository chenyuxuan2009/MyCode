#include<bits/stdc++.h>
using namespace std;
vector<int>tree[200005];
int v[200005];
void dfs(int x)
{
	v[x]=1;
	for(int i:tree[x])
	{
		if(!v[i])
		{
			cout<<x<<" "<<i<<endl;
			dfs(i);
		}
	}
}
void bfs(int x)
{
	memset(v,0,sizeof(v));
	queue<int>q;
	q.push(x);
	v[x]=1;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for(int i:tree[u])
		{
			if(!v[i])
			{
				cout<<u<<" "<<i<<endl;
				q.push(i);
				v[i]=1;
			}
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}
	dfs(1);
	bfs(1);
	return 0;
}