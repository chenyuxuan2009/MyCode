/*
 * @Author: cyx2009 2176807108@qq.com
 * @Date: 2023-04-05 14:04:16
 * @LastEditors: cyx2009 2176807108@qq.com
 * @LastEditTime: 2023-04-05 14:08:49
 * @FilePath: \code\T_326568_GMOI_R_2_T_1_轴对称.cpp
 * @Description: OI code.
 * @QQ: 2176807108
 * @WeChat: chenyuxuan20091119
 * Copyright (c) 2023 by cyx2009, All Rights Reserved. 
 */
#include<bits/stdc++.h>
using namespace std;
const int p=256;
int a[120][120][5];
int n,m,q;
bool check()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m/2;j++)
        {
            if(a[i][j][1]==a[i][m-j+1][1]&&a[i][j][2]==a[i][m-j+1][2]&&a[i][j][3]==a[i][m-j+1][3])
            {
                continue;
            }
            return 0;
        }
    }
    return 1;
}
#define getchar() p1==p2&&(p2=(p1=buf)+fread(buf,1,1000000,stdin),p1==p2)?EOF:*p1++
char buf[1000000],*p1=buf,*p2=buf;
inline int read()
{
    register char c=getchar();register int x=0;
    while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')x=(x<<1)+(x<<3)+(c^48),c=getchar();
    return x;
}
int main()
{
    n=read();m=read();q=read();
    while(q--)
    {
        int x,y,op,c;
        x=read();y=read();op=read();
        a[x][y][op]=(a[x][y][op]+read())%p;
        puts(check()?"Yes":"No");
    }
    return 0;
}