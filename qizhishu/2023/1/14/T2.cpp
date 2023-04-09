#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    map<int,pair<int,int>>mp;
    mp.clear();
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        mp[x].first=(mp[x].first==0?i:mp[x].first);
        mp[x].second=i;
    }
    while(k--)
    {
        int u,v;
        cin>>u>>v;
        puts(mp[u].first!=0&&mp[u].second!=0&&mp[u].first<mp[v].second?"YES":"NO");
    }
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}