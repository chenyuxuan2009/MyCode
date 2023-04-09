#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    int x[m+1]={},y[m+1]={},cnty=0,id=-1919810;
    for(int i=0;i<n*m;i++)
    {
        char c;
        cin>>c;
        if(c=='1')
        {
            id=i;
            if(y[i%m]==0)cnty++;
            y[i%m]=1;
        }
        if(i-id+1<=m)x[i%m]++;
        cout<<x[i%m]+cnty<<" \n"[i==n*m-1];
    }
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}