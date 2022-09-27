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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int s[n+1];
		for(int i=1;i<=n;i++)cin>>s[i];
		sort(s+1,s+n+1);
		for(int i=n;i>=2;i--)s[i]-=s[i-1];
		int res=0x3f3f3f3f;
		for(int i=2;i<=n;i++)res=min(res,s[i]);
		printf("%d\n",res);
	}
	return 0;
}

