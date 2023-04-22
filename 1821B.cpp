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
* Copyright (c) 2023-04-20 22:36:46 by cyx2009, All Rights Reserved. 
* Path: 1821B.cpp
*/
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i];
    a[0]=b[0]=0;
    int l=n+1,r=0,minn=INT_MAX,maxx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=b[i])l=min(l,i),r=max(r,i),minn=min(a[i],minn),maxx=max(a[i],maxx);
    }
    for(int i=l;i>1;i--)
    {
        if(a[i-1]==b[i-1]&&(a[i-1]<=minn))l--,minn=a[i-1];
    }
    for(int i=r;i<n;i++)
    {
        if(a[i+1]==b[i+1]&&(a[i+1]>=maxx))r++,maxx=a[i+1];
    }
    cout<<l<<" "<<r<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}