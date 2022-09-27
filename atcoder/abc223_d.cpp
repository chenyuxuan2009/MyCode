#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
int n,m;
vector<int>G[2<<17];
int ans[2<<17],deg[2<<17];
main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		G[a].push_back(b);
		deg[b]++;
	}
	priority_queue<int,vector<int>,greater<int>>p;
	for(int i=1;i<=n;i++)if(!deg[i])p.push(i);
	int sz=0;
	while(!p.empty())
	{
		int u=p.top();
		p.pop();
		ans[sz++]=u;
		for(int v:G[u])if(!--deg[v])p.push(v);
	}
	if(sz<n)cout<<-1;
	else for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}

