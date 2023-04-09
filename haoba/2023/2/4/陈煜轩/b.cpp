#include<bits/stdc++.h>
using namespace std;
bool h[1000020];
void solve()
{
    int n,ans=1;
    cin>>n;
    while(!h[n])
    {
        h[n]=1;
        if(n&1)n=n*3+1;
        else n>>=1;
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    freopen("b.in","r",stdin);
    freopen("b.out","w",stdout);
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve(); 
    return 0;
}