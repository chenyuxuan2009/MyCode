#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    s=' '+s;
    int a[n+1];
    a[0]=1;
    for(int i=1;i<=n;i++)
    {
        a[i]=a[i-1]+(s[i]=='W');
    }
    int ans=1919810;
    for(int i=1;i<=n-k+1;i++)
    {
        ans=min(ans,a[i+k-1]-a[i-1]);
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