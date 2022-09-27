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
	int a,n,s=0;
	cin>>n;
	for1(i,1,n,1)
	{
		cin>>a;
		if(a>10)s+=(a-10); 
	} 
	cout<<s;
	return 0;
}

