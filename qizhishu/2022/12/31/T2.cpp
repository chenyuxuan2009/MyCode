#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    if(n==3||n==3)
    {
        puts("-1");
        return;
    }
    cout<<n<<" "<<n-1<<" ";
    for(int i=3;i<=n;i++)
    {
        cout<<i-2<<" ";
    }
    cout<<endl;
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