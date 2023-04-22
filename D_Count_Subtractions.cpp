/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-09 20:00:19
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-09 20:16:58
 * @FilePath: \code\D_Count_Subtractions.cpp
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
long long ans;
void gcd(long long a,long long b)
{
    if(a<b)swap(a,b);
    while(b!=0)
    {
        long long c=a%b;
        ans+=(c==0?a/b-1:a/b);
        a=b;
        b=c;
    }
}
int main()
{
    long long a,b;
    cin>>a>>b;
    gcd(a,b);
    cout<<ans<<endl;
    return 0;
}