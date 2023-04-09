#include<bits/stdc++.h>
using namespace std;
int N,M,ans=114514;
int s[50],t[50],c[50];
int a[50],b[50],p[50],m[50];
bool f[50];
void dfs(int dep)
{
    if(dep>M)
    {
        int ss[120]={},sum=0;
        for(int i=1;i<=M;i++)
        {
            if(!f[i])continue;
            sum+=m[i];
            ss[a[i]]+=p[i];
            ss[b[i]+1]-=p[i];
        }
        for(int i=1;i<=100;i++)
        {
            ss[i]+=ss[i-1];
        }
        for(int i=1;i<=N;i++)
        {
            for(int j=s[i];j<=t[i];j++)
            {
                if(ss[j]<c[i])return;
            }
        }
        // for(int i=1;i<=M;i++)cout<<f[i]<<" ";
        // cout<<endl;
        ans=min(ans,sum);
        return;
    }
    f[dep]=1;
    dfs(dep+1);
    f[dep]=0;
    dfs(dep+1);
}
void solve()
{
    cin>>N>>M;
    for(int i=1;i<=N;i++)
    {
        cin>>s[i]>>t[i]>>c[i];
    }
    for(int i=1;i<=M;i++)
    {
        cin>>a[i]>>b[i]>>p[i]>>m[i];
    }
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