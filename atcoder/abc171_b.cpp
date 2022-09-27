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
int a[1005];
int main()
{
	int k,n,s=0; 
	cin>>k>>n;
	for(int i=1;i<=k;i++)cin>>a[i];
	sort(a+1,a+k+1);
	for(int i=1;i<=n;i++)s+=a[i];
	cout<<s;
	return 0;
}

