/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-02 13:57:42
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-02 14:05:05
 * @FilePath: \code\28B.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int n;
int a[120];
int b[120];
int fa[120];
int F(int u)
{
    return fa[u]==u?u:fa[u]=F(fa[u]);
}
void U(int u,int v)
{
    int fu=F(u),fv=F(v);
    if(fu==fv)return;
    fa[fu]=fv;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fa[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        if(i-b[i]>=1)U(i,i-b[i]);
        if(i+b[i]<=n)U(i,i+b[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if(F(a[i])!=F(i))
        {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}