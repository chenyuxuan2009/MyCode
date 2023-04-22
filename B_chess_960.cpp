/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-09 20:00:16
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-09 20:11:04
 * @FilePath: \code\B_chess_960.cpp
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
int main()
{
    string s;
    cin>>s;
    bool tmp1=0,tmp2=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            if(s[i]=='B'&&s[j]=='B'&&(i&1)!=(j&1))
            {
                tmp1=1;
            }
            if(s[i]=='R'&&s[j]=='R'&&s.substr(i,j-i+1).find("K")!=string::npos)
            {
                tmp2=1;
            }
        }
    }
    puts(tmp1&tmp2?"Yes":"No");
    return 0;
}