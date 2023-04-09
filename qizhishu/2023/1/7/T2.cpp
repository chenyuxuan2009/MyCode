#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int cnt1=0,cnt0=0,CNT;
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i])cnt1++;
        else cnt0++;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        if(b[i])cnt1--;
        else cnt0--;
    }
    if(!cnt0&&!cnt1)
    {
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=b[i]){puts("1");return;}
        }
        puts("0");
    }
    else
    {
        CNT=(abs(cnt0)+abs(cnt1))/2;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=b[i]){b[i]=a[i];CNT--;}
        }
        if(CNT<0)cout<<1+(abs(cnt0)+abs(cnt1))/2<<endl;
        else cout<<(abs(cnt0)+abs(cnt1))/2<<endl;
    }
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