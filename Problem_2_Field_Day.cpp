#include<bits/stdc++.h>
#define rev(i,c) (((1<<c)-1)^i)
#define chg(i,j) (i^(1<<j-1))
using namespace std;
int c,n;
int a[100020];
int dis[1<<20];
int ans[100020];
bool vis[1<<20];
void bfs()
{
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        int u=rev(a[i],c);
        dis[u]=0;vis[u]=1;
        q.push(u);
    }
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=1;i<=c;i++)
        {
            int v=chg(u,i);
            if(!vis[v])
            {
                dis[v]=dis[u]+1;vis[v]=1;
                q.push(v);
            }
        }
    }
    for(int i=1;i<=n;i++)ans[i]=c-dis[a[i]];
}
int main()
{
    memset(dis,-1,sizeof(dis));
    cin>>c>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<c;j++)
        {
            a[i]=(a[i]<<1)+(s[j]=='H');
        }
    }
    bfs();
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}