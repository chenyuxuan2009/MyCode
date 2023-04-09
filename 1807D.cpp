#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,q;
    cin>>n>>q;
    long long s[n+1]={};
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]+=s[i-1];
    }
    while(q--)
    {
        int l,r;
        long long k;
        cin>>l>>r>>k;
        puts((s[n]-(s[r]-s[l-1])+k*(r-l+1))&1?"YES":"NO");
    }
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}