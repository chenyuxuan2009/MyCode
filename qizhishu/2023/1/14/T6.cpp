#include<bits/stdc++.h>
using namespace std;
vector<int>a[2020];
int f[2020][2020];
int fa[2020][2020];
int dep[2020][2020];
int n;
string s;
void clear(int n)
{
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)f[i][j]=fa[i][j]=dep[i][j]=0;
    for(int i=0;i<2020;i++)a[i].clear();
}
void dfs(int root,int u,int father)
{
    fa[root][u]=father;
    dep[root][u]=dep[root][father]+1;
    for(int i:a[u])
    {
        if(i!=father)
        {
            dfs(root,i,u);
        }
    }
}
int dp(int i,int j)
{
    if(f[i][j]!=0)return f[i][j];
    if(dep[i][j]==1)return f[i][j]=1;
    if(dep[i][j]==2)return f[i][j]=1+(s[i]==s[j]);
    return f[i][j]=max({
        dp(i,fa[i][j]),
        dp(fa[j][i],j),
        dp(fa[j][i],fa[i][j])+(s[i]==s[j]?2:0)
    });
}
void solve()
{
    cin>>n>>s;
    clear(n);
    s='$'+s;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i,i,0);//root:i,tmp:i,dep:0
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ans=max(ans,dp(i,j));
            // cout<<f[i][j]<<" \n"[j==n];
        }
    }
    cout<<ans<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}