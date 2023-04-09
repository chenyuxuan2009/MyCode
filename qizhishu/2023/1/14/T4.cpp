#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1],x;
    for(int i=1;i<=n;i++)cin>>a[i];
    x=a[1];
    sort(a+1,a+n+1);
    puts(x==a[1]?"Bob":"Alice");
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}