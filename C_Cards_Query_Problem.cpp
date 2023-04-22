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
* Copyright (c) 2023-04-15 20:15:40 by cyx2009, All Rights Reserved. 
* Path: C_Cards_Query_Problem.cpp
*/

/* Set&Multiset
#include<bits/stdc++.h>
using namespace std;
int n,q;
multiset<int>s1[200020];
set<int>s2[200020];
int main()
{
    cin>>n>>q;
    while(q--)
    {
        int op,x,y;
        cin>>op>>x;
        if(op==1)
        {
            cin>>y;
            s1[y].insert(x);
            s2[x].insert(y);
        }
        else if(op==2)
        {
            for(int i:s1[x])cout<<i<<" ";
            cout<<endl;
        }
        else 
        {
            for(int i:s2[x])cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}
*/

/*Vector*/
#include<bits/stdc++.h>
using namespace std;
int n,q;
vector<int>a[200020],b[200020];
int main()
{
    cin>>n>>q;
    while(q--)
    {
        int op,x,y;
        cin>>op>>x;
        if(op==1)
        {
            cin>>y;
            a[y].push_back(x);
            b[x].push_back(y);
        }
        else if(op==2)
        {
            sort(a[x].begin(),a[x].end());
            for(int i:a[x])cout<<i<<" ";
            cout<<endl;
        }
        else 
        {
            sort(b[x].begin(),b[x].end());
            b[x].erase(unique(b[x].begin(),b[x].end()),b[x].end());
            for(int i:b[x])cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}