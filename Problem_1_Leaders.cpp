#include<bits/stdc++.h>
#define H(i,j) (Hf[j]-Hf[i-1])
#define G(i,j) (Gf[j]-Gf[i-1])
using namespace std;
void solve()
{
    int n;string s;
    cin>>n>>s;
    s=' '+s;
    int a[n+5];
    int Hf[n+5]={},Gf[n+5]={};
    int Hb[n+5]={},Gb[n+5]={};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        Hf[i]=Hf[i-1]+(s[i]=='H');
        Gf[i]=Gf[i-1]+(s[i]=='G');
        // cout<<Gf[i]<<" \n"[i==n];
    }
    for(int i=n;i>=1;i--)
    {
        Hb[i]=Hb[i+1];
        Gb[i]=Gb[i+1];
        if(s[i]=='H')
        {
            if(H(i,a[i])==Hf[n]||Gb[i+1]-Gb[a[i]+1])Hb[i]++;
        }
        if(s[i]=='G')
        {
            // cout<<"G:"<<Gf[n]<<" "<<G(i,a[i])<<endl;
            if(G(i,a[i])==Gf[n]||Hb[i+1]-Hb[a[i]+1])Gb[i]++;
        }
        // cout<<Gb[i]<<" "<<Hb[i]<<endl;
    }
    cout<<(Hb[1]*Gb[1])<<endl;
}
int main()
{
    if(1){ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
    // int t;cin>>t;while(t--)
    solve();
    return 0;
}