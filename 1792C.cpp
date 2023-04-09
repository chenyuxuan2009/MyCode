#include<bits/stdc++.h>
using namespace std;
int a[200020];
int id[200020];
int n;
bool check(int mid)
{
    for(int i=mid+1;i<n-mid;i++)
    {
        if(id[i]>id[i+1])return 0;
    }
    return 1;
}
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        id[a[i]]=i;
    }
    int ans=0,l=0,r=n,mid;
    while(l<=r)
    {
        mid=l+r>>1;
        if(check(mid))
        {
            r=mid-1;
            ans=mid;
        }
        else
        {
            l=mid+1;
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