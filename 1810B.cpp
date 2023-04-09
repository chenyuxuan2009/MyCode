#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(!(n&1)){puts("-1");return;}
    stack<int>s;
    while(n!=3)
    {
        if(((n+1)/2)&1)
        {
            s.push(1);
            n=(n+1)/2;
        }
        else
        {
            s.push(2);
            n=(n-1)/2;
        }
    }
    s.push(2);
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}