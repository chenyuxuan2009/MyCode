#include<bits/stdc++.h>
using namespace std;
bool f[100][100];
int n,m,ans=114514,sum;
int u,v;
bool vis[100];
int i,j;
void dfs(int u)
{
    vis[u]=1;
    for(int v=1;v<=n;v++)
    {
        if(v!=i&&v!=j&&f[u][v]&&!vis[v])
        {
            dfs(v);
        }
    }
}
void solve()
{
    cin>>n>>m;
    while(m--){int u,v;cin>>u>>v;f[u][v]=1;}
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            sum=0;
            for(int k=1;k<=n;k++)
            {
                if(k==i||k==j)continue;
                int cnt=0;
                memset(vis,0,sizeof(vis));
                dfs(k);
                for(int _=1;_<=n;_++)
                {
                    if(_==k)continue;
                    sum+=vis[_];
                    cnt+=vis[_];
                }
                // cout<<i<<" "<<j<<" "<<k<<" "<<cnt<<endl;
            }
            // cout<<i<<" "<<j<<" "<<sum<<endl;
            ans=min(ans,sum);
        }
    }
    cout<<ans<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}