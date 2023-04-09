/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-02 20:27:25
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-02 20:30:17
 * @FilePath: \code\D_I_Hate_Non_integer_Number.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
const int mod=998244353;
long long f[120][120][120],ans;
int a[120];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	f[0][0][0]=1;
	for(int m=1;m<=n;m++) 
    {
        for(int i=0;i<=n;i++)f[i][0][0]=1;
		for(int i=1;i<=n;i++) 
        {
			for(int j=1;j<=i;j++) 
            {
				for(int k=0;k<m;k++) 
                {
					f[i][j][k]=(f[i-1][j][k]*1ll+f[i-1][j-1][((k-a[i])%m+m)%m])%mod;
				}
			}
		}
		ans=(ans+f[n][m][0])%mod;
	}
	cout<<ans<<endl;
	return 0;
}
