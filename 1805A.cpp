/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-03 20:12:56
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-03 20:42:21
 * @FilePath: \code\1805A.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        ans^=x;
    }
    cout<<(!(n&1)&&ans?-1:ans)<<endl;
}
int main()
{
    int t;cin>>t;while(t--)
    solve();
    return 0;
}