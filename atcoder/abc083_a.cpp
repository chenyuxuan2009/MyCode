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
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if((a+b)>(c+d))puts("Left");
	if((a+b)<(c+d))puts("Right");
	if((a+b)==(c+d))puts("Balanced");
	return 0;
}

