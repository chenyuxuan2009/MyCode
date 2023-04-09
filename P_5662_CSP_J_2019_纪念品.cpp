/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-03 20:48:01
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-03 20:59:42
 * @FilePath: \code\P_5662_CSP_J_2019_纪念品.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int t,n,m,ans;
int a[120][120];
int f[10020];
int main()
{
    cin>>t>>n>>m;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int day=1;day<t;day++)
    {
        memset(f,0,sizeof(f));
        for(int i=1;i<=n;i++)
        {
            for(int j=a[day][i];j<=m;j++)
            {
                f[j]=max(f[j],f[j-a[day][i]]+a[day+1][i]-a[day][i]);
            }
        }
        m+=f[m];
    }
    cout<<m<<endl;
    return 0;
}