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
	if(a+c<2*b)cout<<2*b-a-c;
	else if(a+c==2*b)puts("0");
	else 
	{
		if((a+c)%2==1)cout<<(a+c)/2-b+2;
		else cout<<(a+c)/2-b;
	}
	return 0;
}

