/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-04 22:36:59
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-05 00:08:33
 * @FilePath: \code\1811D.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll f[50];
void init()
{
    f[0]=1;
    f[1]=1;
    for(int i=2;i<=45;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
}
void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll w=f[n+1],h=f[n],x1,y1,x2,y2;
    x1=1;y1=w;
    x2=h;y2=w;
    int p=n;
    while(x2-x1+1!=1&&y2-y1+1!=1&&x2-x1+1!=1&&y2-y1+1!=1)
    {
        if(x2-x>=f[p]&&)
        {
            x1+=f[p];y1+=f[p];
            p--;
        }
        else
        {
            x2-=f[p];y2-=f[p];
            p--;
        }
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    }
    puts(x1==x&&y1==y?"YES":"NO");
}
int main()
{
    init();
    int t;cin>>t;while(t--)
    solve();
    return 0;
}