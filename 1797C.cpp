/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-09 10:06:56
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-10 21:33:20
 * @FilePath: \code\1797C.cpp
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
void solve()
{
    // int n,m,a,b=INT_MAX,c=INT_MAX;
    // cin>>n>>m;
    // cout<<"? 1 1"<<endl;
    // cin>>a;
    // if(a+1<=m)
    // {
    //     cout<<"? 1 "<<a+1<<endl;
    //     cin>>b;
    // }
    // if(a+1<=n)
    // {
    //     cout<<"? "<<a+1<<" 1"<<endl;
    //     cin>>c;
    // }
    // if(a==b&&b==c)cout<<"! "<<a+1<<" "<<a+1<<endl;
    // else if(b<a)cout<<"! "<<b+1<<" "<<a+1<<endl;
    // else cout<<"! "<<a+1<<" "<<c+1<<endl;
    /*
    int n,m,a,b,c,ux,uy,vx,vy;
    cin>>n>>m;
    cout<<"? "<<n<<" "<<m<<endl;
    cin>>a;
    ux=n-a,uy=m-a;
    if(ux<1)ux=1;
    if(uy<1)uy=1;
    cout<<"? "<<n<<" "<<1<<endl;
    cin>>b;
    vx=n-b,vy=1+b;
    if(vx<1)vx=1;
    if(vy>m)vy=m;
    cout<<ux<<" "<<uy<<" "<<vx<<" "<<vy<<endl;
    if(ux==vx&&uy==vy)
    {
        cout<<"? "<<ux<<" "<<uy<<endl;
        cin>>c;
        cout<<"! "<<ux+c<<" "<<uy<<endl;
    }
    else if(ux==vx)
    {
        cout<<"? "<<ux<<" "<<1<<endl;
        cin>>c;
        cout<<"! "<<ux<<" "<<1+c<<endl;
    }
    else
    {
        cout<<"? "<<1<<" "<<uy<<endl;
        cin>>c;
        cout<<"! "<<1+c<<" "<<uy<<endl;
    }
    */
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}