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
int c[14]{0,100,2,3,4,5,6,7,8,9,10,11,12,13};
int main()
{
	int a,b;
	cin>>a>>b;
	if(c[a]>c[b])puts("Alice");
	if(c[a]<c[b])puts("Bob");
	if(c[a]==c[b])puts("Draw");
	return 0;
}

