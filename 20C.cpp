#include<bits/stdc++.h>
using namespace std;
#define pii pair<long long,int>
struct node
{
    int v;
    long long w;
};
bool vis[100020];
vector<node>a[100020];
long long d[100020];
int pre[100020];
priority_queue<pii,vector<pii>,greater<pii>>q;
int main()
{
	int n,m,s,u,v,cnt=0;
    long long w;
	cin>>n>>m;
	while(m--)
	{
		cin>>u>>v>>w;
		a[u].push_back({v,w});
        a[v].push_back({u,w});
	}
	memset(d,0x3f,sizeof(d));
	d[1]=0;
	q.push(make_pair(0,1));
	while(!q.empty())
	{
		while(!q.empty()&&vis[q.top().second]==1)q.pop();
		if(q.empty())break;
		u=q.top().second;w=q.top().first;
		q.pop();
		vis[u]=1;
		for(int i=0;i<a[u].size();i++)
		{
			v=a[u][i].v;
			w=a[u][i].w;
			if(d[v]>d[u]+w)
            {
                pre[v]=u;
                d[v]=d[u]+w,q.push(make_pair(d[v],v));
            }
		}
	}
	if(d[n]==d[0]){cout<<-1<<endl;return 0;}
    stack<int>stk;
    int k=n;
    while(k)
    {
        stk.push(k);
        k=pre[k];
    }
    while(!stk.empty())
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
	return 0;
}