#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int low[10020];
int dfn[10020];
int In[10020];
int h[10020];
int zjs[10020];
int c[10020];
int times,n,m,Index,ans,cnt;
stack<int>a;
vector<int>g[10020];
vector<int>G[10020];
vector<int>b[10020];
void tarjan(int u)
{
	dfn[u]=low[u]=++times;
	a.push(u);
	In[u]=1;
	for(int i=0;i<g[u].size();i++)
	{
		int v=g[u][i];
		if(dfn[v]!=0)
		{
			if(In[v]==1)low[u]=min(low[u],dfn[v]);
		}
		else
		{
			tarjan(v);
			low[u]=min(low[u],low[v]);
		}
	}
	if(low[u]==dfn[u])
	{
		cnt++;
//		cout<<cnt<<endl;
//		puts("cnt");
		while(!a.empty()&&a.top()!=u)
		{
			b[cnt].push_back(a.top());
			In[a.top()]=0;
			h[a.top()]=cnt;
			zjs[cnt]++;
			a.pop();
		}
		h[a.top()]=cnt;
		b[cnt].push_back(a.top());
		In[a.top()]=0;
		zjs[cnt]++;
		a.pop();
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	while(m--)
	{
		int x,y;
		cin>>x>>y;
		g[x].push_back(y);
	}
	for(int i=1;i<=n;i++)if(!dfn[i])tarjan(i);
//	tarjan(1);
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<g[i].size();j++)
		{
			int u=i,v=g[i][j];
			if(h[u]!=h[v])
			{
				G[h[u]].push_back(h[v]);
			}
		}
	}
	bool f=0;
	for(int i=1;i<=cnt;i++)
	{
		if(G[i].empty())
		{
			if(f)
			{
				cout<<0<<endl;
				return 0;
			}
			f=1;
			ans=i;
		}
		
		
	}
	cout<<zjs[ans]<<endl;
	return 0;
}
/*

*/