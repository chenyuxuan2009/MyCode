#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    int cnt0=0,cnt1=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i]; 
       if(a[i]==0)cnt0++;
       else if(a[i]==1)cnt1++;
       else cnt++;
    }
    if(cnt0==n)puts("1");
    else if(cnt0<=(n+1)/2)puts("0");
    else if(cnt0&&cnt1&&!cnt)puts("2");
    else puts("1");
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}