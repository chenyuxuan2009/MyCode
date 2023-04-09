#include<bits/stdc++.h>
using namespace std;
void solve()
{
    map<long long,bool>mp;
    int q;
    cin>>q;
    while(q--)
    {
        char op;
        long long x;
        cin>>op>>x;
        if(op=='+')
        {
            mp[x]=1;
        }
        else if(op=='-')
        {
            mp[x]=0;
        }
        else
        {
            long long y=x;
            while(mp[y])y+=x;
            cout<<y<<endl;
        }
    }
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}