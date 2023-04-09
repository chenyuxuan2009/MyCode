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
    int s=0,ans=n;
    for(int i=1;i<=n;i++)
    {
        s+=a[i];
        int j=i+1,tmp=0,maxx=i,lst=i;
        while(j<=n)
        {
            tmp+=a[j];
            if(tmp>s)goto bk;
            if(tmp==s)
            {
                maxx=max(maxx,j-lst);
                lst=j;
                tmp=0;
            }
            j++;
        }
        if(tmp!=0)goto bk;
        ans=min(ans,maxx);
        bk:;
    }
    cout<<ans<<endl;
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