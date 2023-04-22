/*
* @Author: cyx2009 2176807108@qq.com
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
* Copyright (c) 2023-04-15 20:55:06 by cyx2009, All Rights Reserved. 
* Path: E_Unfair_Sugoroku.cpp
*/
#include<bits/stdc++.h>
using namespace std;
int n,a,b,p,q;
long long x,y;
bool vis[120][120][2];
void dfs(int a,bool F)
{
    if(a==n){if(F)y++;else x++;return;}
    if(F==0)
    {
        for(int i=1;i<=p;i++)
        {
            if(vis[a][i][F]^1){dfs(min(n,a+i),F^1);vis[a][i][F]=1;}
        }
    }
    else
    {
        for(int i=1;i<=q;i++)
        {
            if(vis[a][i][F]^1){dfs(min(n,a+i),F^1);vis[a][i][F]=1;}
        }
    }
}
int main()
{
    cin>>n>>a>>b>>p>>q;

    return 0;
}