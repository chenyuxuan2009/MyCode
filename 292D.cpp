/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-09 13:38:49
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-09 18:29:38
 * @FilePath: \code\292D.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * @AcWing: https://www.acwing.com/user/myspace/index/235063/
 * @AtCoder: https://atcoder.jp/users/cayaxi09
 * @CodeForces: https://codeforces.com/profile/_YXJS_
 * @CSES: https://cses.fi/user/82260
 * @CZOJ: http://czoj.com.cn/user/6
 * @DarkBZOJ: https://darkbzoj.cc/user/profile/cyx2009
 * @Hydro: https://hydro.ac/user/7609
 * @LibreOJ: https://loj.ac/u/chenyuxuan__2009
 * @Luogu: https://www.luogu.com.cn/user/516346
 * @Peking University OJ: http://poj.org/userstatus?user_id=cyx2009
 * @Sphere OJ: https://www.spoj.com/status/chen__2009/
 * @Timus: https://acm.timus.ru/author.aspx?id=357988
 * @Universal OJ: https://uoj.ac/user/profile/chenyuxuan__2009
 * @UVAOJ: https://uhunt.onlinejudge.org/id/1278566
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
/*
#include<bits/stdc++.h>
using namespace std;
struct DSU
{
    int fa[520],cnt;
    DSU(){cnt=0;for(int i=1;i<=500;i++)fa[i]=i;}
    int F(int u){return !(fa[u]^u)?u:fa[u]=F(fa[u]);}
    void U(int u,int v){int fu=F(u),fv=F(v);if(fu^fv){fa[fu]=fv;cnt++;}}
}L[10020],R[10020],ans;
int l[10020],r[10020];
int n,m,q;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>l[i]>>r[i];
    }
    for(int i=1;i<=m;i++)
    {
        L[i]=L[i-1];
        L[i].U(l[i],r[i]);
    }
    for(int i=m;i>=1;i--)
    {
        R[i]=R[i+1];
        R[i].U(l[i],r[i]);
    }
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        ans=L[x-1];
        for(int i=1;i<=n;i++)
        {
            if(R[y+1].fa[i]^i)ans.U(i,R[y+1].fa[i]);
        }
        cout<<n-ans.cnt<<endl;
    }
    return 0;
}
*/
#include<bits/stdc++.h>
#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++
char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;
    while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=(x<<1)+(x<<3)+(c^48),c=getchar();
    return x;
}
using namespace std;
int ans;
int n,m,q;
vector<pair<int,int>>a[520];
int vis[520],x,y,u,v;
void dfs(int u)
{
    vis[u]=1;
    for(auto v:a[u])
    {
        if(!vis[v.first]&&(v.second<x||v.second>y))
        {
            dfs(v.first);
        }
    }
}
int main()
{
    n=read();m=read();
    for(int i=1;i<=m;i++)
    {
        u=read();v=read();
        a[u].push_back(make_pair(v,i));
        a[v].push_back(make_pair(u,i));
    }
    q=read();
    while(q--)
    {
        ans=0;
        memset(vis,0,sizeof(vis));
        x=read();y=read();
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
                ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}