#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,s,r;
    cin>>n>>s>>r;
    int x=r/(n-1),y=r%(n-1);
    cout<<(s-r)<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<x+(y>=i?1:0)<<" \n"[i==n-1];
    }
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}