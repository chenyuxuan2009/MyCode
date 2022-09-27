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
int a[105];
int main()
{
	int n,x,s=0;
 	cin>>n>>x;
 	int a[n+1];
  	for(int i=1;i<=n;i++)
  	{
  		cin>>a[i];
  		if(i%2==0)s=s-1;
  		s=s+a[i];
  	}
  	if(s<=x)cout<<"Yes";
  	else cout<<"No";
	return 0;
}

