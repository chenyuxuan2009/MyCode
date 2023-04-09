#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long x;
    cin>>x;
    if((x&1)|(x&(x>>1)))cout<<-1<<endl;
    else cout<<(x>>1)<<" "<<((x*3)>>1)<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}