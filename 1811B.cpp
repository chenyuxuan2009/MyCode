/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-04 22:55:26
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-04 23:00:17
 * @FilePath: \code\1811B.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,a,b,c,d,x=0,y=0;
    cin>>n>>a>>b>>c>>d;
    if(a>n/2)a=n-a+1;
    if(c>n/2)c=n-c+1;
    if(b>n/2)b=n-b+1;
    if(d>n/2)d=n-d+1;
    if(a<b)x=a;
    else x=b;
    if(c<d)y=c;
    else y=d;
    cout<<abs(x-y)<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}