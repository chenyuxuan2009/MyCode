#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define ll long long
#define for1(i,n,a,b) for(ll (i)=(n);(i)<=(a);(i)+=(b))
#define for2(i,n,a,b) for(ll (i)=(n);(i)>=(a);(i)-=(b))
int main()
{
	ll a,b,c;
	scanf("%lld%lld%lld",&a,&b,&c);
	if(c>=a&&c<=b)printf("Yes\n");
	else printf("No\n");
	return 0;
}

