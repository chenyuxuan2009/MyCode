/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-04 22:51:33
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-04 23:31:10
 * @FilePath: \code\1811E.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    cin>>n;
    int stk[50],top=0;
    while(n!=0)
    {
        stk[++top]=n%9;
        n/=9;
    }
    reverse(stk+1,stk+top+1);
    for(int i=1;i<=top;i++)
    {
        cout<<stk[i]+(stk[i]>3);
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}