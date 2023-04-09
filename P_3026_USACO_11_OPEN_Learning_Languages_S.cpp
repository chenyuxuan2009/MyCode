/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-02 15:45:46
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-02 15:45:59
 * @FilePath: \code\P_3026_USACO_11_OPEN_Learning_Languages_S.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int fa[40020];
int F(int u)
{
    return fa[u]==u?u:fa[u]=F(fa[u]);
}
void U(int u,int v)
{
    int fu=F(u),fv=F(v);
    if(fu!=fv)fa[fu]=fv;
}
int n,m,ans;
bool f;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n+m;i++)fa[i]=i;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
        if(k)f=1;
        while(k--)
        {
            int x;
            cin>>x;
            U(x+n,i);
        }
    }
    if(!f)
    {
        cout<<n<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(F(i)==i)
        {
            ans++;
        }
    }
    cout<<ans-1<<endl;
    return 0;
}