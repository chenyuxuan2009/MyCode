#include<bits/stdc++.h>
using namespace std;
int n,Times;
int a[200020];
vector<int>g[200020];
int deg[200020];
int vis[200020];
int fa[200020];
bool ff[200020];
stack<int>s;
void topo()
{
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(!deg[i])
        {
            q.push(i);
        }
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i:g[u])
        {
            deg[i]--;
            if(!deg[i])
            {
                q.push(i);
            }
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        g[i].push_back(a[i]);
        deg[a[i]]++;
    }
    topo();
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(deg[i])ans++;
    }
    cout<<ans<<endl;
    return 0;
}