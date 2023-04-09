/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-03 21:05:57
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-03 21:30:09
 * @FilePath: \code\Easy_GCD.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){return !y?x:gcd(y,x%y);}
void solve()
{
    int n,k,g=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        g=gcd(g,x);
    }
    int ans=0;
    for(int i=1;i<=sqrt(g);i++)
    {
        if(g%i==0)ans=max({ans,k/(g/i)*(g/i),i==1?0:k/i*i});   
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}