#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    bool f[n+1]={};
    f[0]=1;
    for(int i=1;i<=n;i++)
    {
        if(i<=n-b[i]&&f[i-1])f[i+b[i]]=1;//left
        if(i-b[i]-1>=0&&f[i-b[i]-1])f[i]=1;//right
    }
    puts(f[n]?"YES":"NO");
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