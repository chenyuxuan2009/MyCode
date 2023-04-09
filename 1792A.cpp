#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){int x;cin>>x;cnt+=x==1;}
    cout<<(n-cnt/2)<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}