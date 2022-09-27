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
	int n,k1,k2,m1,m2,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k1>>k2>>m1>>m2;
		int ans1=min(k1,k2)+(abs(k1-k2)/2);
		int ans2=min(n-k1,n-k2)+(abs(k1-k2)>>1);
		if(m1>ans1||m2>ans2)
		{
			puts("NO");
		}
		else puts("YES");
	}
	return 0;
}

