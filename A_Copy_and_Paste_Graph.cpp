/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-08 20:00:20
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-09 08:16:04
 * @FilePath: \code\A_Copy_and_Paste_Graph.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,q;
int f[120][120];
int main()
{
    memset(f,0x3f,sizeof(f));
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            if(x)f[i][j]=1;
        }
    }
    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
            }
        }
    }
    cin>>q;
    while(q--)
    {
        ll u,v;
        cin>>u>>v;
        u--;v--;
        u%=n;
        v%=n;
        cout<<(f[u][v]==0x3f3f3f3f?-1:f[u][v])<<endl;
    }
    return 0;
}