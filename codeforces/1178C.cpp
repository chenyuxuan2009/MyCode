#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
ll p=998244353,w,h;
void number(ll x,ll y)
{
	ll re=1;
	for(;y>0;y>>=1)
	{
		if(y&1)re=re*x%p;
		x=x*x%p;
	}
	printf("%lld",re);
}
int main()
{
	scanf("%lld%lld",&w,&h);
	number(2,w+h);
	return 0;
}

