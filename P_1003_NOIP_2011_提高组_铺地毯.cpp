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
* Copyright (c) 2023-04-11 19:51:30 by cyx2009, All Rights Reserved. 
* Name: P_1003_NOIP_2011_提高组_铺地毯.cpp
*/
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a,b,g,k;
}a[10020];
int n,ans=-1,x,y;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].a>>a[i].b>>a[i].g>>a[i].k;
    }
    cin>>x>>y;
    for(int i=1;i<=n;i++)
    {
        if(x>=a[i].a&&x<=a[i].a+a[i].g&&y>=a[i].b&&y<=a[i].b+a[i].k)
        {
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}