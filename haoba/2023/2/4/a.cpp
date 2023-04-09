#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[0]*a[1]/2<<endl;
}
int main()
{
    freopen("a.in","r",stdin);
    freopen("a.out","w",stdout);
    if(0){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve(); 
    return 0;
}