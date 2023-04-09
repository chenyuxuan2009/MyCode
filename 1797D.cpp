/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-09 10:58:50
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-09 11:29:37
 * @FilePath: \code\1797D.cpp
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
int n,q;
int sz[200020];
int fa[200020];
long long sum[200020];
long long val[200020];
vector<int>a[200020];
struct node
{
    int data;
};
bool operator <(node a,node b)
{
    if(sz[a.data]!=sz[b.data]) return sz[a.data]>sz[b.data];
	return a.data<b.data;
}
multiset<node>s[200020];
node New(int data){return {data};}
int Get(int u){return (*s[u].begin()).data;}
void dfs(int u,int Fa)
{
    sz[u]=1;
    fa[u]=Fa;
    sum[u]=val[u];
    for(int v:a[u])
    {
		if(!(v^Fa))continue;
		dfs(v,u);
		sz[u]+=sz[v];
        sum[u]+=sum[v];
		s[u].insert(New(v));
	}
}
int main()
{
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>val[i];
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
        int op,u;//wc,op
        cin>>op>>u;
        if(op==1)
        {
            cout<<sum[u]<<endl;
        }
        else
        {
            if(s[u].empty())continue;
			int v=Get(u);
			s[fa[u]].erase(New(u));
			sum[u]-=sum[v];
			sz[u]-=sz[v];
			int t=fa[u];
			s[v].insert(New(u));
			sum[v]+=sum[u];
			sz[v]+=sz[u];
			fa[u]=v;
			fa[v]=t;
			s[u].erase(s[u].begin());
			s[fa[v]].insert(New(v));
        }
    }
    return 0;
}