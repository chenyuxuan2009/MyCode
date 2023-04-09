#include<bits/stdc++.h>
using namespace std;
int n,k;
int L,R,ans,ansL,ansR;
int s[300020];
int a[300020];
int main()
{
    cin>>n>>k;
    if(k==0)
    {
        int cnt=0;
        for(int i=1;i<=n;i++){cin>>a[i];if(a[i]==1)cnt++;else{ans=max(ans,cnt);cnt=0;}}
        cout<<max(ans,cnt)<<endl;
        for(int i=1;i<=n;i++)cout<<a[i]<<" \n"[i==n];
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+(a[i]==0);
    }
    L=1;R=0;
    while(L<=n&&R<=n)
    {
        while(R+1<=n&&(s[R+1]-s[L-1])<=k)R++;
        if(R-L+1>ans)
        {
            ans=R-L+1;
            ansL=L;
            ansR=R;
        }
        L++;R=max(R,L);
    }
    cout<<ans<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<(i>=ansL&&i<=ansR?1:a[i])<<" \n"[i==n];
    }
    return 0;
}