#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    ll c,d;
    cin>>n>>c>>d;
    ll a[n+5]={};
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    ll Ins=0,Chg=0,ans=LLONG_MAX,p=0;
    for(ll i=1;i<=n;i++)
    {
        p++;
        if(i!=1)
        {
            ans=min(ans,Ins*d+Chg*c+c*(n-i+1));
        }
        while(a[i]==a[i-1])
        {
            i++;
            Chg++;
        }
        if(i>n)break;
        if(a[i]==p)continue;
        Ins+=(a[i]-p);
        p=a[i];
    }
    ans=min({ans,Ins*d+Chg*c,c*n+d});
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}