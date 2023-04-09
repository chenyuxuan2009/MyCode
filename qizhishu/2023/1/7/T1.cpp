#include<bits/stdc++.h>
using namespace std;
void solve()
{
    stack<int>ans;
    int n;
    cin>>n;
    for(int i=9;i>=1;i--)
    {
        if(n>=i)
        {
            ans.push(i);
            n-=i;
        }
    }
    while(!ans.empty())
    {
        cout<<ans.top();
        ans.pop();
    }
    cout<<'\n';
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}