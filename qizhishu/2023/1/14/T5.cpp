#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n;
    long long s[n+1]={},mn_t=0;
    for(int i=1;i<=n;i++)cin>>s[i],s[i]+=s[i-1];
    for(int i=1;i<=n;i++)mn_t=max(mn_t,(s[i]+i-1)/i);
    cin>>m;
    // cout<<mn_t<<endl;
    while(m--)
    {
        int t;
        cin>>t;
        if(t<mn_t){puts("-1");continue;}
        cout<<(s[n]+t-1)/t<<endl;
    }
}
int main()
{
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}
/*
Don't use "ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);" and "puts" and "cout" together.
*/