#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int k=d-b;
    int ans=k;
    a+=k;
    if(a<c)ans=-1;
    else ans+=a-c;
    if(k<0)ans=-1;
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}