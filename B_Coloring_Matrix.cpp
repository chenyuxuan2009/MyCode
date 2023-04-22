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
* Copyright (c) 2023-04-15 20:07:01 by cyx2009, All Rights Reserved. 
* Path: B_Coloring_Matrix.cpp
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[120][120];
int b[120][120];
void chg()
{
    int c[120][120];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            c[i][j]=a[n-j+1][i];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            a[i][j]=c[i][j];
            // cout<<a[i][j]<<" \n"[j==n];
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=1;i<=4;i++)
    {
        chg();
        // cout<<endl;
        bool f=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(a[i][j])
                {
                    if(!b[i][j])f=0;
                }
            }
        }
        if(f)
        {
            puts("Yes");
            return 0;
        }
    }
    puts("No");
    return 0;
}