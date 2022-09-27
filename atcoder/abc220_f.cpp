#include<bits/stdc++.h>
using namespace std;
int N;
vector<int>G[2<<17];
int ch[2<<17];
long dp[2<<17];
int dfs1(int u,int p)
{
	for(int v:G[u])if(v!=p)
	{
		int now=dfs1(v,u);
		dp[u]+=dp[v]+now;
		ch[u]+=now;
	}
	return ch[u]+=1;
}
void dfs2(int u,int p,long up)
{
	dp[u]+=up+(N-ch[u]);
	for(int v:G[u])if(v!=p)
	{
		dfs2(v,u,dp[u]-dp[v]-ch[v]);
	}
}
main()
{
	cin>>N;
	for(int i=1;i<N;i++)
	{
		int a,b;
		cin>>a>>b;
		a--,b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	dfs1(0,-1);
	dfs2(0,-1,0);
	for(int i=0;i<N;i++)cout<<dp[i]<<"\n";
}

