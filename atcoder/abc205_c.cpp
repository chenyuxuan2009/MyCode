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
	cin>>a>>b>>c;
	if(c%2==1)
	{
		if(a>b)puts(">");
		if(a<b)puts("<");
		if(a==b)puts("=");
	}
	if(c%2==0)
	{
		if(abs(a)>abs(b))puts(">");
		if(abs(a)<abs(b))puts("<");
		if(abs(a)==abs(b))puts("=");
	}
	return 0;
}

