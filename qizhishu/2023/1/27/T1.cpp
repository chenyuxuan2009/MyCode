#include<bits/stdc++.h>
using namespace std;
int n;
long long m,k,ans;
long long u[20],v[20],w[20];
bool a[20],b[20];
void dfs(int dep)
{
    if(dep>n)
    {
        long long U=0,V=0,W=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i])
            {
                U+=u[i];
                W+=w[i];
            }
            if(b[i])
            {
                V+=v[i];
                W+=w[i];
            }
        }
        if(U<=m&&V<=k)ans=max(ans,W);
        return;
    }
    a[dep]=1;
    b[dep]=0;
    dfs(dep+1);
    a[dep]=0;
    b[dep]=1;
    dfs(dep+1);
    a[dep]=0;
    b[dep]=0;
    dfs(dep+1);
}
void solve()
{
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)cin>>u[i]>>v[i]>>w[i];
    dfs(1);
    cout<<ans<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}