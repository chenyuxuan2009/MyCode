#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    bool ok=1;
    for(int i=0;i<n;i++) 
    {
        ok&=!((s[i]=='R')!=(t[i]=='R'));
    }
    puts(ok?"YES":"NO"); 
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}