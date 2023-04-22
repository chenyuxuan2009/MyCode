/*
* @Author: cyx2009 2176807108@qq.com
* @LastEditors: Please set LastEditors
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
* Copyright (c) 2023-04-11 19:01:01 by cyx2009, All Rights Reserved. 
* Name: P_1106_删数问题.cpp
*/
#include<bits/stdc++.h>
using namespace std;
string s,ans;
int k,len;
int main()
{
    cin>>s>>k;
    len=s.size()-k;
    while(k--)
    {
        for(int i=0;i<(int)s.size()-1;i++)
        {
            if(s[i]>s[i+1])
            {
                s.erase(i,1);
                break;
            }
        }
    }
    if(s.size()>1&&s[0]=='0')
    {
        reverse(s.begin(),s.end());
        s=s.substr(0,s.find("0"));
        //0000114514
        //4154110000
        //(0,6)
        reverse(s.begin(),s.end());
    }
    if(s.size()>len)
    {
        s=s.substr(0,len);
    }
    cout<<s<<endl;
    return 0;
}