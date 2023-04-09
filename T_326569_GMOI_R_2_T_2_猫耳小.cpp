/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-05 14:23:21
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-05 14:53:13
 * @FilePath: \code\T_326569_GMOI_R_2_T_2_猫耳小.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
int n,k,ans;
int a[5020];
int vis[5020];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        vis[a[i]]=1;
        if(a[i]==k)
        {
            memset(vis,0,sizeof(vis));
			continue;
        }
        for(int j=0;j<=k;j++)
		{
			if(j==k)
			{
                memset(vis,0,sizeof(vis));
				ans++;
				break;
			}
			if(!vis[j])
			{
				break;
			}
		}
    }
    cout<<ans<<endl;
    return 0;
}