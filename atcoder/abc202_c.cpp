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
ll A[1000001],B[1000001],C[1000001],cnt[1000001],n,ans;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
		cnt[A[i]]++;
	}
	for(int i=1;i<=n;i++)cin>>B[i];
	for(int i=1;i<=n;i++)
	{
		cin>>C[i];
		ans+=cnt[B[C[i]]];
	}
	cout<<ans<<endl;
	return 0;
}

