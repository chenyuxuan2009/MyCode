/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-09 14:58:08
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-09 15:17:58
 * @FilePath: \code\D_Built.cpp
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
#include<bits/stdc++.h>
using namespace std;
int n,ans,cnt;
int fa[100020];
int F(int u){return fa[u]^u?fa[u]=F(fa[u]):u;}
struct node
{
    int u,v,w,id;
}a[100020],stk[100020];
int top;
bool cmp1(node a,node b)
{
    return a.u<b.u;
}
bool cmp2(node a,node b)
{
    return a.v<b.v;
}
bool cmp3(node a,node b)
{
    return a.w<b.w;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].u>>a[i].v;
        a[i].id=i;
    }
    sort(a+1,a+n+1,cmp1);
    for(int i=1;i<n;i++)
    {
        stk[++top]={a[i].id,a[i+1].id,(a[i+1].u-a[i].u)};
    }
    sort(a+1,a+n+1,cmp2);
    for(int i=1;i<n;i++)
    {
        stk[++top]={a[i].id,a[i+1].id,(a[i+1].v-a[i].v)};
    }
    sort(stk+1,stk+top+1,cmp3);
    for(int i=1;i<=n;i++)fa[i]=i;
    for(int i=1;i<=top;i++)
    {
        int u=stk[i].u,v=stk[i].v,w=stk[i].w;
        int fu=F(u),fv=F(v);
        if(fu^fv)
        {
            ans+=w;
            fa[fu]=fv;
            cnt++;
            if(cnt>=n-1)break;
        }
    }
    cout<<ans<<endl;
    return 0;
}