#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define SB1 cin
#define SB2 cout
ll check1(ll a)//判断质数或合数
{
	if(a==1)return 0;
	for(ll i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)return false;
	}
	return true;
}
ll check2(string str)//判断回文
{
	string st=str;
	reverse(st.begin(),st.end());
	if(st==str)return true;
	else return false;
}
ll check3(ll a)//判断奇偶
{
	if(a%2==0)return true;
	else return false;
}
ll check4(ll a)//平闰年
{
	if(a%4==0&&a%100==0||a%400==0)return true;
	else return false;
}
ll gcd(ll i,ll j)//最大公因数
{
	int b=max(i,j),c=min(i,j),y=1;
	while(y>0)
	{
		y=b%c;
		if(y==0)
		{
			break;
		}
		b=c;
		c=y;
	}
	return c;
}
ll lcm(ll i,ll j)//最小公倍数
{
	int b=max(i,j),c=min(i,j),y=1;
	while(y>0)
	{
		y=b%c;
		if(y==0)
		{
			break;
		}
		b=c;
		c=y;
	}
	return i*j/c;
}
ll number1(ll a,ll b)//次方
{
	int s=1;
	for(int i=1;i<=b;i++)
	{
		s*=a;
	}
	return s;
}
ll number2(ll a)//阶乘
{
	int s=1;
	for(int i=1;i<=a;i++)
	{
		s*=i;
	}
	return s;
}
int a[30005],b[30005];
int main()
{
	int n,t;
    cin>>n>>t;
    for(int i=1;i<=n-1;i++)
    {
    	cin>>a[i];
	}
    b[1]=true;
    for(int i=1;i<=n;i++)
    {
    	if(b[i])b[i+a[i]]=true;
	}
    if(b[t])puts("YES");
    else puts("NO");
	return 0;
}


