#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans=1145141919810;
long long w[20];
bool a[20],b[20],c[20];
void dfs(int dep)
{
    if(dep>n)
    {
        long long A=0,B=0,C=0;
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i])
            {
                A+=w[i];
                cnt++;
            }
            if(b[i])
            {
                B+=w[i];
                cnt++;
            }
            if(c[i])
            {
                C+=w[i];
                cnt++;
            }
        }
        if(cnt>=m)ans=min(ans,max({A,B,C})-min({A,B,C}));
        return;
    }
    a[dep]=1;
    b[dep]=0;
    c[dep]=0;
    dfs(dep+1);
    a[dep]=0;
    b[dep]=1;
    c[dep]=0;
    dfs(dep+1);
    a[dep]=0;
    b[dep]=0;
    c[dep]=1;
    dfs(dep+1);
    a[dep]=0;
    b[dep]=0;
    c[dep]=0;
    dfs(dep+1);
}
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>w[i];
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