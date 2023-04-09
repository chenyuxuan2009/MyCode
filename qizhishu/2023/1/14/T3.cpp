#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    pair<int,int>a[n+1];
    int b[n+1];
    for(int i=1;i<=n;i++)cin>>a[i].first;
    for(int i=1;i<=n;i++)cin>>a[i].second,b[i]=a[i].second-a[i].first;
    sort(b+1,b+n+1);
    int l=1,r=n,ans=0;
    while(l<r)
    {
        // cout<<l<<" "<<r<<endl;
        if(b[l]+b[r]>=0&&l<r)l++,r--,ans++;
        else l++;
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