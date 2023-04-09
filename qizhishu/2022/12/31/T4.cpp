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
    int ans=0;
    for(int k=2;k<=n;k*=2)
    {
        int l=1,r=k+1;
        for(int i=1;i<=n;i+=k)
        {
            if(!is_sorted(a+l,a+r))
            {
                ans++;
                for(int j=i;j<=i+k/2-1;j++)
                {
                    swap(a[j],a[j+k/2]);
                }
            }
            l+=k;
            r+=k;
        }
        // for(int i=1;i<=n;i++)
        // {
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
    }
    if(!is_sorted(a+1,a+n+1))ans=-1;
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