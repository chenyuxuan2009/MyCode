/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-02 19:40:49
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-02 20:14:29
 * @FilePath: \code\E_Subtree_K_th_Max.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int n,q;
vector<int>a[100020];
int w[100020];
int f[100020][50],len[100020];
int stk[100020],top;
void dfs(int u,int fa)
{
    for(int v:a[u])
    {
        if(!(v^fa))continue;
        dfs(v,u);
    }
    top=0;
    for(int v:a[u])
    {
        if(!(v^fa))continue;
        for(int i=1;i<=len[v];i++)
        {
            stk[++top]=f[v][i];
        }
    }
    stk[++top]=w[u];
    sort(stk+1,stk+top+1,greater<int>());
    len[u]=min(20,top);
    for(int i=1;i<=len[u];i++)f[u][i]=stk[i];
}
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
    }
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1,0);
    while(q--)
    {
        int u,v;
        cin>>u>>v;
        cout<<f[u][v]<<endl;
    }
    return 0;
}