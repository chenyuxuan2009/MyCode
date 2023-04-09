#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int odd=0,even=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x&1)odd+=x;
        else even+=x;
    }
    puts(even>odd?"YES":"NO");
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}