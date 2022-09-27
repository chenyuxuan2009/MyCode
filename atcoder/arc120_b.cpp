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
ll number3(ll a)//平闰年
{
	if(a%4==0&&a%100==0||a%400==0)return true;
	else return false;
}
char a[505][505];
int flag[1005];
int mod=998244353;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='.')flag[i+j]|=1;
			if(a[i][j]=='B')flag[i+j]|=2;
			if(a[i][j]=='R')flag[i+j]|=4;
		}
	}
	ll ans=1;
	for(int i=0;i<n+m;i++)
	{
		if(flag[i]==1)ans=ans*2%mod;
		if(flag[i]==6||flag[i]==7)ans=0;
	}
	cout<<ans;
	return 0;
}
