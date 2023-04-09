/*
 * @Author: cyx2009
 * @Date: 2023-03-26 17:12:59
 * @LastEditors: chenyuxuan 2176807108@qq.com
 * @LastEditTime: 2023-04-02 11:56:31
 * @FilePath: \code\1806C.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n*2+1];
    for(int i=1;i<=2*n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<abs(a[2]-a[1])<<endl;
        return;
    }
    if(n&1)
    {
        long long ans=0;
        for(int i=1;i<=2*n;i++)
        {
            ans+=abs(a[i]);
        }
        cout<<ans<<endl;
    }
    else
    {
        long long num=0,ans=0;
        for(int i=1;i<=2*n;i++)
        {
            num+=abs(a[i]+1);
            ans+=abs(a[i]);
        }
        for(int i=1;i<=2*n;i++)
        {
            ans=min(ans,num-abs(a[i]+1)+abs(a[i]-n));
        }
        if(n==2)
        {
            ans=min(ans,1ll*abs(a[1]-2)+1ll*abs(a[2]-2)+1ll*abs(a[3]-2)+1ll*abs(a[4]-2));
        }
        cout<<ans<<endl;
    }
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}