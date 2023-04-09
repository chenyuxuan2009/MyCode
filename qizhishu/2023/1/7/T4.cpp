#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int l=1,r=1;
    long long ans=0;
    while(l<=n&&r<=n)
    {
        while(r+1<=n&&a[r+1]>=r+1-l+1)r++;
        ans+=(r-l+1);
        // cout<<l<<" "<<r<<endl;
        l++;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}