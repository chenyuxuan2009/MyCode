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
	int a,b;
	cin>>a>>b;
	if(b==0)puts("Gold");
	else if(a==0)puts("Silver");
	else puts("Alloy");
	return 0;
}

