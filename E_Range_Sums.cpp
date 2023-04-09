/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-02 13:17:15
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-02 13:19:25
 * @FilePath: \code\E_Range_Sums.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int n,q;
int f[200020];
int find(int u)
{
    return u==f[u]?u:f[u]=find(f[u]);
}
int main()
{
    cin>>n>>q;
    for(int i=0;i<=n;i++)f[i]=i;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        f[find(l-1)]=find(r);
    }
    puts(find(0)==find(n)?"Yes":"No");
    return 0;
}