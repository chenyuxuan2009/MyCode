#include<bits/stdc++.h>
using namespace std;
const int p=1e9+7;
bool vis[500020];
int h[500020];
int nxt[500020];
bool f=1;
int n;
int get_ans()
{
    int ret=1;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            f=1;
            vis[i]=1;
            int v=nxt[i],u=i;
            // cout<<u<<" ";
            while(v!=u)
            {
                // cout<<v<<" ";
                if(h[v])f=0;
                vis[v]=1;
                v=nxt[v];
            }
            if(h[i]||nxt[i]==i)f=0;
            ret*=(f+1);
            ret%=p;
            // cout<<ret<<endl;
            
        }
    }
    return ret;
}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)vis[i]=0,h[i]=0,nxt[i]=0;
    int a[n+1],b[n+1],c[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i],nxt[a[i]]=b[i];
    for(int i=1;i<=n;i++)cin>>c[i],h[c[i]]=1;
    cout<<get_ans()<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}