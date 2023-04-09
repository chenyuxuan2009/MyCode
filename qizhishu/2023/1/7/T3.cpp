#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int cnt_5_0=0;
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%10%5==0)cnt_5_0++;
    }
    if(cnt_5_0==n)
    {
        bool same=1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]%10!=0)
            {
                a[i]+=5;
            }
            if(a[i]!=a[1])same=0;
        }
        puts(same?"Yes":"No");
        return;
    }
    else if(cnt_5_0!=0)
    {
        puts("No");
        return;
    }
    bool odd=0,even=0;
    for(int i=1;i<=n;i++)
    {
        while(a[i]%10!=2)
        {
            a[i]+=a[i]%10;
        }
        if((a[i]/10)&1)odd=1;
        else even=1;
    }
    puts(odd&&even?"No":"Yes");
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
/*
1 2
2
3 6 2
4 8 6 2
7 4 8 6 2
9 8 6 2

2 4 8 6(1) 2 (2)

5 0 5 0
0 0 0
*/