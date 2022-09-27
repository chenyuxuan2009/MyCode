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
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	if(b>=c*d)cout<<"-1"<<'\n';
	else cout<<ceil(a/(c*d-b));
	return 0;
}

