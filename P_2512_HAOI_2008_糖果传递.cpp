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
* Copyright (c) 2023-04-11 18:31:47 by cyx2009, All Rights Reserved. 
* Name: P_2512_HAOI_2008_糖果传递.cpp
*/
#include<bits/stdc++.h>
using namespace std;
int n;
long long tot,ans;
int a[1000020];
int b[1000020];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i],tot+=a[i];
	tot/=n;
	for(int i=1;i<=n;i++)
	{
		b[i]=b[i-1]+a[i]-tot;
	}
    sort(b+1,b+n+1);
    int mid=b[(n+1)/2];
    for(int i=1;i<=n;i++)
	{
		ans+=abs(mid-b[i]);
	}
	cout<<ans<<endl;
    return 0;
}