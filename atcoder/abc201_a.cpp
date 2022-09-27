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
int a[3];
int main()
{
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	if(a[1]-a[0]==a[2]-a[1])puts("Yes");
	else puts("No");
	return 0;
}

