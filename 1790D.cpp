#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    multiset<int>s;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    int ans=0;
    while(!s.empty())
    {
        ans++;
        int tmp=*s.begin();
        while(s.find(tmp)!=s.end())
        {
            s.erase(s.find(tmp++));
        }
    }
    cout<<ans<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}