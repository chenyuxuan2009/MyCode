#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=i)
        {
            puts("YES");
            return;
        }
    }
    puts("NO");
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}