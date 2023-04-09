#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[101][101]={};
    int b[n+1]={},p[n+1];
    for(int i=1;i<=n;i++)
    {
        b[i]=0;
        for(int j=1;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=1;j<=n;j++)
    {
        int h[n+1]={},maxx=0,id;
        for(int i=1;i<=n;i++)
        {
            h[a[i][j-b[i]]]++;
            // cout<<a[i][j-b[i]]<<" \n"[i==n];
            if(h[a[i][j-b[i]]]>maxx)
            {
                id=a[i][j-b[i]];
                maxx=h[a[i][j-b[i]]];
            }
        }
        p[j]=id;
        for(int i=1;i<=n;i++)
        {
            if(a[i][j-b[i]]!=id)
            {
                b[i]=1;
            }
        }
    }
    // cout<<endl;
    for(int i=1;i<=n;i++)cout<<p[i]<<" \n"[i==n];

}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    int t;cin>>t;while(t--)
    solve();
    return 0;
}