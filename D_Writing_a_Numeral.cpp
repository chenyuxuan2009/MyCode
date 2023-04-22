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
* Copyright (c) 2023-04-15 20:21:23 by cyx2009, All Rights Reserved. 
* Path: D_Writing_a_Numeral.cpp
*/
#include<bits/stdc++.h>
using namespace std;
int q;
long long a=1;
queue<int>Q;
const int p=998244353;
long long qpow(long long x,long long y)
{
    long long re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%p;
		x=x*x%p;
	}
	return re;
}
int main()
{
    Q.push(1);
    cin>>q;
    while(q--)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            int x;
            cin>>x;
            Q.push(x);
            a=a*10+x;
            a%=p;
        }
        else if(op==2)
        {
            a-=(Q.front()*qpow(10,Q.size()-1));
            a%=p;a=(a+p)%p;
            Q.pop();
        }
        else
        {
            cout<<(long long)a%p<<endl;
        }
    }
    return 0;
}