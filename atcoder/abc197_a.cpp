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
	string s;
	cin>>s;
	s[3]=s[0];
	s[0]=s[1];
	s[1]=s[2];
	s[2]=s[3];
	cout<<s;
	return 0;
}

