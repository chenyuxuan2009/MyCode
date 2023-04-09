#include<bits/stdc++.h>
using namespace std;
int n;
int m;
long long ans;
long long a[20];
long long u[20],v[20],w[20];
long long id[20];
long long Ti[20];
void dfs(int dep)
{
    if(dep>m)
    {
        memset(Ti,0,sizeof(Ti));
        // for(int i=1;i<=m;i++)cout<<id[i]<<" ";
        // cout<<endl;
        long long tmp=0;
        for(int i=1;i<=m;i++)
        {
            if(id[i]==0)continue;
            if(a[id[i]]<v[i]){/*cout<<"Wrong Hard:"<<a[id[i]]<<" "<<v[i]<<endl;*/return;}
            if(Ti[id[i]]>=u[i]){/*cout<<"Wrong Time:"<<Ti[id[i]]<<" "<<u[i]<<endl;*/return;}
            Ti[id[i]]=u[i]+v[i];
            tmp+=w[i];
        }
       
        ans=max(ans,tmp);
        return;
    }
    for(int i=1;i<=n;i++)
    {
        id[dep]=i;
        dfs(dep+1);
    }
    id[dep]=0;
    dfs(dep+1);
}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;i++)cin>>u[i]>>v[i]>>w[i];
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